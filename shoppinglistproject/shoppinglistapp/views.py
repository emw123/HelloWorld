from django.shortcuts import render
from .models import ShoppingListItem
from django.http import HttpResponseRedirect 

# Create your views here.
def shoppinglistappView(request):
    return render(request, 'shoppinglist.html')

def shoppinglistappView(request):
    all_shopping_items = ShoppingListItem.objects.all()
    return render (request, 'shoppinglist.html',
    {'all_items':all_shopping_items})

def addShoppinglistView(request):
    x = request.POST['content']
    new_item = ShoppingListItem(content = x)
    new_item.save()
    return HttpResponseRedirect('/shoppinglistapp/')

def deleteShoppinglistView(request, i):
    y = ShoppingListItem.objects.get(id= i)
    y.delete()
    return HttpResponseRedirect('/shoppinglistapp/')