/* f_0x100fa050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100fa050(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x104dfd98u), arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100eb2b0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100fa144;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100e5190u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_100fa144;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_stdcall(g, COW_IMG(0x100e8930u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        goto L_100fa144;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_stdcall(g, COW_IMG(0x100f88b0u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 1u)
    {
        eax = t10;
        goto L_100fa144;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x100e0560u), ecx, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 1u)
    {
        eax = t13;
        goto L_100fa144;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_stdcall(g, COW_IMG(0x100eadf0u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        goto L_100fa144;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_stdcall(g, COW_IMG(0x100f0720u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 1u)
    {
        eax = t19;
        goto L_100fa144;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_stdcall(g, COW_IMG(0x100f0650u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 != 1u)
    {
        eax = t22;
        goto L_100fa144;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_stdcall(g, COW_IMG(0x100e3ef0u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 != 1u)
    {
        eax = t25;
        goto L_100fa144;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_stdcall(g, COW_IMG(0x100f8780u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 != 1u)
    {
        eax = t28;
        goto L_100fa144;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t31 = cow_stdcall(g, COW_IMG(0x100e33c0u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 1u)
    {
        eax = t31;
        goto L_100fa144;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t34 = cow_cdecl(g, COW_IMG(0x100e8440u), 1, COW_IMG(0x10362330u));
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 1u)
    {
        eax = t34;
        goto L_100fa144;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t37 = cow_stdcall(g, COW_IMG(0x100e4300u), 0);
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 != 1u)
    {
        eax = t37;
        goto L_100fa144;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_stdcall(g, COW_IMG(0x100e5f70u), 0);
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 1u)
    {
        eax = t40;
        goto L_100fa144;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t43 = cow_stdcall(g, COW_IMG(0x100e6180u), 0);
    t44 = g->ecx;
    t45 = g->edx;
    if ((uint8_t)t43 != 1u)
    {
        eax = t43;
        goto L_100fa144;
    }
    eax = t43;
    ecx = t44;
    edx = t45;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t46 = cow_stdcall(g, COW_IMG(0x100f0050u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    if ((uint8_t)t46 != 1u)
    {
        eax = t46;
        goto L_100fa144;
    }
    eax = t46;
    ecx = t47;
    edx = t48;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_stdcall(g, COW_IMG(0x100f92f0u), 0);
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 != 1u)
    {
        eax = t49;
        goto L_100fa144;
    }
    eax = t49;
    ecx = t50;
    edx = t51;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t52 = cow_stdcall(g, COW_IMG(0x100e0040u), 0);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 1u)
    {
        eax = t52;
        goto L_100fa144;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t55 = cow_stdcall(g, COW_IMG(0x100f8c60u), 0);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 != 1u)
    {
        eax = t55;
        goto L_100fa144;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_cdecl(g, COW_IMG(0x100e4340u), 1, arg1);
    t59 = g->ecx;
    t60 = g->edx;
    if ((uint8_t)t58 != 1u)
    {
        eax = t58;
        goto L_100fa144;
    }
    eax = t58;
    ecx = t59;
    edx = t60;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t61 = cow_stdcall(g, COW_IMG(0x101131b0u), 0);
    if ((uint8_t)t61 == 1u)
    {
        eax = t61;
        goto L_100fa148;
    }
    eax = t61;
L_100fa144: ;
    return eax & 0xffffff00u;
L_100fa148: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fa050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
