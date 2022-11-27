from django.urls import path

from . import views

urlpatterns = [
    path('', views.index, name='index'),
    path('snoop', views.index, name='snoop'),
]