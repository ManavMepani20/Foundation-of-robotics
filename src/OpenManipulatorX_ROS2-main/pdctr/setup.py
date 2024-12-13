from setuptools import find_packages, setup

package_name = 'pdctr'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='manav',
    maintainer_email='manav@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'current_call = pdctr.current_calc_send:main',
        'motor_call = pdctr.motor_control:main',
        'pos_call = pdctr.position_control:main',
        ],
    },
)
