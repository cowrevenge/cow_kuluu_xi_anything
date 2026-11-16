/* f_0x100eb2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100eb2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x1cu, COW_IMG(0x100ec4a0u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100eb44f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x1eu, COW_IMG(0x100ec4f0u));
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_100eb44f;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x1fu, COW_IMG(0x100ec550u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        goto L_100eb44f;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x20u, COW_IMG(0x100ec630u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 1u)
    {
        eax = t10;
        goto L_100eb44f;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x1du, COW_IMG(0x100ec6c0u));
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 1u)
    {
        eax = t13;
        goto L_100eb44f;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x26u, COW_IMG(0x100ec730u));
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        goto L_100eb44f;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x21u, COW_IMG(0x100ec830u));
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 1u)
    {
        eax = t19;
        goto L_100eb44f;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t22 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x22u, COW_IMG(0x100ec860u));
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 != 1u)
    {
        eax = t22;
        goto L_100eb44f;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t25 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x23u, COW_IMG(0x100ec9f0u));
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 != 1u)
    {
        eax = t25;
        goto L_100eb44f;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t28 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x25u, COW_IMG(0x100ec9a0u));
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 != 1u)
    {
        eax = t28;
        goto L_100eb44f;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t31 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x2bu, COW_IMG(0x100ecab0u));
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 1u)
    {
        eax = t31;
        goto L_100eb44f;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t34 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x2cu, COW_IMG(0x100ecac0u));
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 1u)
    {
        eax = t34;
        goto L_100eb44f;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t37 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x24u, COW_IMG(0x100ecad0u));
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 != 1u)
    {
        eax = t37;
        goto L_100eb44f;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t40 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xd2u, COW_IMG(0x100ecb30u));
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 != 1u)
    {
        eax = t40;
        goto L_100eb44f;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t43 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x73u, COW_IMG(0x100ec140u));
    t44 = g->ecx;
    t45 = g->edx;
    if ((uint8_t)t43 != 1u)
    {
        eax = t43;
        goto L_100eb44f;
    }
    eax = t43;
    ecx = t44;
    edx = t45;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t46 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x74u, COW_IMG(0x100ec190u));
    t47 = g->ecx;
    t48 = g->edx;
    if ((uint8_t)t46 != 1u)
    {
        eax = t46;
        goto L_100eb44f;
    }
    eax = t46;
    ecx = t47;
    edx = t48;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t49 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x47u, COW_IMG(0x100ec320u));
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 != 1u)
    {
        eax = t49;
        goto L_100eb44f;
    }
    eax = t49;
    ecx = t50;
    edx = t51;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t52 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x49u, COW_IMG(0x100ec3c0u));
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 1u)
    {
        eax = t52;
        goto L_100eb44f;
    }
    eax = t52;
    ecx = t53;
    edx = t54;
    g->eax = eax;
    g->esp = sp0;
    t55 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xd3u, COW_IMG(0x100ecf80u));
    if ((uint8_t)t55 == 1u) goto L_100eb452;
    eax = t55;
L_100eb44f: ;
    return eax & 0xffffff00u;
L_100eb452: ;
    edi = rd32(COW_IMG(0x104dfd98u)) + 0x9868u;
    eax = 0u;
    ecx = 0x407bu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0u;
    edx = 0x12u;
L_100eb471: ;
    eax = eax & 0xffffff00u;
L_100eb473: ;
    wr8(ecx + rd32(COW_IMG(0x104dfd98u)) + 0x986au, (uint8_t)eax);
    if ((uint8_t)((uint8_t)eax + 1u) < 0x51u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
        ecx = ecx + 0x2cu;
        goto L_100eb473;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    ecx = ecx + 0x2cu;
    if (edx != 1u)
    {
        edx = edx - 1u;
        goto L_100eb471;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eb2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
