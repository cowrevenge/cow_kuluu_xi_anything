/* f_0x101de4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101de4a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_101de59e;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_101de59e;
    }
    t1 = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    g->ecx = (uint8_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x100e0300u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_101de59e;
    }
    ecx = t3;
    edi = t2;
    t5 = (ecx & 0xffff0000u) | rd16(edi + 0x2cu);
    t6 = rd32(edi + 0xcu);
    g->edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100fd820u), 6, t6, 1u, t5, in_edi, in_esi, in_ebp);
    t8 = g->edx;
    if (t7 > arg2)
    {
        eax = arg2;
        edx = t8;
        goto L_101de59e;
    }
    edx = t8;
    ebx = t7;
    g->edx = edx;
    t9 = rd16(edi);
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t9);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101de59e;
    }
    eax = t10;
    g->eax = eax;
    g->edx = rd32(self);
    t12 = rd32(self);
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, rd32(t12 + 0x20u), self, 2, 0u, eax);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        edx = t15;
        goto L_101de59e;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    if (eax == 0x80404040u) goto L_101de59e;
    t16 = rd32(self + 8u);
    wr8(self + 0x10u, 1u);
    t17 = rd8(t16 + (uint8_t)arg1 * 0x54u + 0x48u);
    wr16(self + 0x12u, (uint8_t)arg1);
    wr8(self + 0x11u, (uint8_t)t17);
    if (ebx == 0u)
    {
        eax = t16;
        edx = (edx & 0xffff0000u) | (uint8_t)arg1;
        ebp = rd32(edi + 4u);
    }
    else
    {
        ebp = rd32(edi + 4u);
        t18 = cow_divu(g, arg2, ebx);
        t19 = cow_modu(g, arg2, ebx);
        if ((int32_t)ebp <= (int32_t)t18)
        {
            eax = t18;
            edx = t19;
        }
        else
        {
            eax = t18;
            edx = t19;
            ebp = eax;
        }
    }
    if (ebp == 0u) goto L_101de59e;
    wr32(COW_IMG(0x1066347cu), ebx);
    t20 = rd16(edi);
    wr16(COW_IMG(0x10663478u), (uint16_t)t20);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x101de080u), (eax & 0xffff0000u) | t20, self, g->edx, 1, 0);
    t22 = g->edx;
    g->ebx = ebx;
    g->edx = t22;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, COW_IMG(0x1013a870u), rd32(COW_IMG(0x10578200u)), 5, 1u, ebp, COW_IMG(0x101de5b0u), t21, 0u);
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return (t23 & 0xffffff00u) | 1u;
L_101de59e: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de4a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
