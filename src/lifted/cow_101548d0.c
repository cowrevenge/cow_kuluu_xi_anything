/* f_0x101548d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101548d0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x78u) == 0u) goto L_10154967;
    eax = rd32(self + 0x78u);
    if (eax == 1u) goto L_10154909;
    eax = eax - 1u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_101549d6;
    }
    eax = eax - 1u;
    if ((uint16_t)arg1 != rd16(self + 0x74u))
    {
        edx = in_edx;
        goto L_101549d6;
    }
    t1 = rd32(self + 0x7cu);
    wr32(self + 0x88u, 1u);
    return t1;
L_10154909: ;
    if ((uint16_t)arg1 != rd16(self + 0x74u))
    {
        edx = in_edx;
        goto L_101549d6;
    }
    t2 = rd32(self + 0x84u);
    t3 = rd32(self + 0x7cu);
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t2, 1, 1, 0x3fu);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4a10u), rd32(COW_IMG(0x10662dccu)), 3, t4, t3, t2);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        t8 = rd32(self + 0x80u);
        t9 = rd32(self + 0x7cu);
        g->edx = t9;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10257d00u), self + 0x64u, 2, t9, t8);
        t10 = g->edx;
        wr32(self + 0x78u, 2u);
        edx = t10;
    }
    wr32(self + 0x88u, 1u);
    g->edx = edx;
    return 0u;
L_10154967: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x64u, 2, self + 0x84u, (uint16_t)arg1);
    t12 = g->edx;
    t13 = rd32(self + 0x7cu);
    wr32(self + 0x80u, t11);
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t13, t12, 1, 1, t13);
    t14 = g->ecx;
    t15 = g->edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t14, t15, 1, 3, t11, t13, in_edi);
    t17 = g->ecx;
    t18 = rd32(self + 0x84u);
    wr32(self + 0x7cu, t16);
    g->esp = sp0 - 0x1cu;
    t19 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t18, 1, 1, 0x3fu);
    t20 = g->edx;
    g->ebx = self + 0x84u;
    g->edx = t20;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t19, t16, t11, t18);
    t22 = g->edx;
    if (t21 == 0u)
    {
        edx = t22;
    }
    else
    {
        edx = t22;
        wr16(self + 0x74u, (uint16_t)arg1);
        wr32(self + 0x78u, 1u);
    }
    wr32(self + 0x88u, 1u);
L_101549d6: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101548d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101548d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
