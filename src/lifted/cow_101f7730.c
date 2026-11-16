/* f_0x101f7730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7730(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d18;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u) goto L_101f7744;
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax & 0xffffff00u;
L_101f7744: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_101f775b;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f775b: ;
    g->eax = rd32(esi);
    t3 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), esi, 0);
    t5 = rd32(t4);
    t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t7 = rd32(t6 + 4u);
    g->eax = t7;
    t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t9 = rd32(t8 + 8u);
    cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    g->edx = t7;
    t10 = rd32(COW_IMG(0x10631f24u));
    t11 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    t12 = cow_thiscall(g, COW_IMG(0x101811d0u), t10, 3, t5, t7, t9);
    t13 = g->ecx;
    t14 = g->edx;
    d15 = cow_take_float(g);
    d16 = cow_take_float(g);
    d17 = cow_take_float(g);
    d18 = cow_take_float(g);
    t19 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, t13, t14, 1, 3, t11, t12, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)t19 >= 0)
    {
        eax = t19;
        edx = t21;
        x3 = d18;
        x2 = d17;
        x1 = d16;
        x0 = d15;
        goto L_101f7807;
    }
    ecx = t20;
    edx = t21;
    esi = t11;
    x3 = d18;
    x2 = d17;
    x1 = d16;
    x0 = d15;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, ecx, edx, 1, 3, esi, 0u, 0u);
    t23 = g->edx;
    if ((int32_t)t22 >= 0)
    {
        eax = t22;
        edx = t23;
        goto L_101f7807;
    }
    eax = t22;
    edx = t23;
    if (arg1 == 0u) goto L_101f7800;
    if (rd16(arg1) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1);
        goto L_101f7800;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1);
    ecx = arg1;
L_101f77ed: ;
    if (esi == (uint32_t)(int16_t)eax)
    {
        edx = (uint32_t)(int16_t)eax;
        goto L_101f7807;
    }
    edx = (uint32_t)(int16_t)eax;
    if (rd16(ecx + 2u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
        ecx = ecx + 2u;
        goto L_101f77ed;
    }
    eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
L_101f7800: ;
    g->edx = edx;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    return eax & 0xffffff00u;
L_101f7807: ;
    g->edx = edx;
    fpush(g, x0);
    fpush(g, x1);
    fpush(g, x2);
    fpush(g, x3);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
