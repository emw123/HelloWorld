from django.db import models

# Create your models here.
class ShoppingListItem(models.Model):
    content = models.TextField() 
