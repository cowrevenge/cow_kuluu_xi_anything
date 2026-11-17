/* f_0x10114750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10114750(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    ecx = 1u;
    edx = rd32(self + 0x284u);
    loc_8 = t1;
L_1011476f: ;
    if (rd32(self + (uint16_t)ecx * 0x1cu + 0x284u) < edx) goto L_10114790;
    if ((uint16_t)(ecx + 1u) < 8u)
    {
        ecx = ecx + 1u;
        goto L_1011476f;
    }
    ebp = 0u;
L_10114792: ;
    if ((int32_t)((uint16_t)ebp + 7u & 0x80000007u) >= 0)
    {
        eax = (uint16_t)ebp + 7u & 0x80000007u;
        ebp = (uint16_t)ebp;
    }
    else
    {
        eax = (uint16_t)ebp + 7u & 0x80000007u;
        ebp = (uint16_t)ebp;
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    t2 = self + (uint16_t)eax * 0x1cu;
    if (rd16(self + (uint16_t)eax * 0x1cu + 0x280u) != (uint16_t)arg1)
    {
        eax = (uint16_t)eax;
        ecx = t2;
        goto L_10114886;
    }
    ecx = t2;
    edx = (edx & 0xffff0000u) | rd16(self + (uint16_t)eax * 0x1cu + 0x280u);
    eax = (uint16_t)eax;
    loc_4 = t2;
    if (arg4 == 0u) goto L_10114886;
    esi = ecx + 0x28cu;
    edi = arg4;
L_101147e1: ;
    if (rd8(esi) != rd8(edi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi);
        cf = rd8(esi) < rd8(edi);
        goto L_10114805;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    edx = (edx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_10114801;
    if (rd8(esi + 1u) != rd8(edi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        cf = rd8(esi + 1u) < rd8(edi + 1u);
        goto L_10114805;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    edx = (edx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        esi = esi + 2u;
        edi = edi + 2u;
        goto L_101147e1;
    }
L_10114801: ;
    ecx = 0u;
L_1011480a: ;
    if (ecx != 0u) goto L_10114882;
    if (loc_8 > rd32(eax * 0x1cu + self + 0x284u) + 0x1eu)
    {
        ecx = eax * 8u + 0xb8u - (eax + 0x17u);
        eax = loc_8;
        goto L_10114882;
    }
    ecx = eax * 8u + 0xb8u - (eax + 0x17u);
    edx = rd32(eax * 0x1cu + self + 0x284u) + 0x1eu;
    edi = eax * 0x1cu + self + 0x284u;
    if (arg3 == 0u)
    {
        esi = loc_4;
    }
    else
    {
        esi = loc_4;
        wr32(esi + 0x288u, arg3);
    }
    wr16(esi + 0x282u, (uint16_t)arg2);
    if (rd8(arg4) == 0u)
    {
        eax = arg4;
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_call_regs(g, COW_IMG(0x10312090u), esi + 0x28cu, g->ecx, g->edx, 1, 3, esi + 0x28cu, arg4, 0x10u);
        t4 = g->edx;
        wr8(esi + 0x29bu, 0u);
        eax = t3;
        edx = t4;
    }
    wr32(edi, loc_8);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x10114660u), self, edx, 0);
    return;
L_10114790: ;
    ebp = ecx;
    goto L_10114792;
L_10114805: ;
    ecx = -cf + 1u - cf;
    goto L_1011480a;
L_10114882: ;
L_10114886: ;
    wr16(ebp * 0x1cu + self + 0x280u, (uint16_t)arg1);
    wr32(ebp * 0x1cu + self + 0x288u, arg3);
    wr16(ebp * 0x1cu + self + 0x282u, (uint16_t)arg2);
    t5 = ebp * 0x1cu + self + 0x28cu;
    wr32(t5, 0u);
    wr32(t5 + 4u, 0u);
    wr32(t5 + 8u, 0u);
    wr32(t5 + 0xcu, 0u);
    if (arg4 == 0u)
    {
        edx = t5;
    }
    else
    {
        eax = t5;
        edx = t5;
        esi = ebp * 0x1cu + self;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, eax, arg4, 0x10u);
        t6 = g->edx;
        wr8(esi + 0x29bu, 0u);
        edx = t6;
    }
    wr32(ebp * 0x1cu + self + 0x284u, loc_8);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x10114660u), self, edx, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
