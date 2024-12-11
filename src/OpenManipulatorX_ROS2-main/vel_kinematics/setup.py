from setuptools import find_packages, setup

package_name = 'vel_kinematics'

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
            'velk_call = vel_kinematics.vel_kinematics:main',
            'velcalc_call = vel_kinematics.vel_calc:main',
            'velpub_call = vel_kinematics.vel_pub:main',
        ],
    },
)
