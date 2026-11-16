/* f_0x10098610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10098610(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 308u);

    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_esi);
    wr8(sp0 - 0x10cu, 0xbfu);
    wr8(sp0 - 0x10bu, 0u);
    wr8(sp0 - 0x10au, 0u);
    t1 = (in_eax & 0xffff0000u) | rd16(arg3 + 0x58u);
    if ((uint16_t)t1 >= 8u)
    {
        eax = t1;
        edx = in_edx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ebx = (uint16_t)t1 << 4u;
        wr32(sp0 - 0x118u, in_ebp);
        wr32(sp0 - 0x11cu, in_edi);
        t2 = rd32(arg3 + 0x44u);
        wr32(sp0 - 0x120u, t2);
        wr32(sp0 - 0x124u, arg3 + 0x48u);
        wr32(sp0 - 0x128u, COW_IMG(0x1035bb2cu));
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        g->ebx = ebx;
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x118u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1035bb2cu), arg3 + 0x48u, t2, in_edi);
        t3 = g->edx;
        wr32(sp0 - 0x120u, 0u);
        wr32(sp0 - 0x124u, 1u);
        wr32(sp0 - 0x128u, 0u);
        wr32(sp0 - 0x12cu, sp0 - 0x10cu);
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        g->ebx = ebx;
        g->eax = sp0 - 0x10cu;
        t4 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 0x11cu;
        t5 = cow_thiscall(g, COW_IMG(0x10127c00u), t4, 5, sp0 - 0x100u, sp0 - 0x10cu, 0u, 1u, 0u);
        t6 = g->ecx;
        wr32(sp0 - 0x104u, arg3 + 4u);
        eax = t5;
        ecx = t6;
        ebp = 0u;
        esi = arg3 + 4u;
        edi = ebx << 5u;
        loc_104 = arg3 + 4u;
L_1009868c: ;
        wr32(sp0 - 0x108u, rd32(esi));
        edx = rd32(esi);
        loc_108 = rd32(esi);
        esi = 0u;
L_10098694: ;
        if (loc_108 & 1u)
        {
            t7 = ebp * 0x20u + ebx * 0x20u + esi;
            wr32(sp0 - 0x120u, t7);
            g->eax = t7;
            g->esp = sp0 - 0x11cu;
            t8 = cow_call_regs(g, COW_IMG(0x100ae390u), g->eax, ecx, edx, 1, 1, t7);
            wr32(sp0 - 0x124u, t8);
            wr32(sp0 - 0x128u, edi + esi);
            wr32(sp0 - 0x12cu, COW_IMG(0x1035bb20u));
            wr32(sp0 - 0x130u, sp0 - 0x100u);
            g->ebx = ebx;
            g->edx = sp0 - 0x100u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1035bb20u), edi + esi, t8, rd32(sp0 - 0x120u));
            t9 = g->edx;
            wr32(sp0 - 0x120u, 0u);
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0u);
            wr32(sp0 - 0x12cu, sp0 - 0x10cu);
            wr32(sp0 - 0x130u, sp0 - 0x100u);
            g->ebx = ebx;
            g->eax = sp0 - 0x10cu;
            t10 = rd32(COW_IMG(0x10578158u));
            t11 = cow_thiscall(g, COW_IMG(0x10127c00u), t10, 5, sp0 - 0x100u, sp0 - 0x10cu, 0u, 1u, 0u);
            t12 = g->ecx;
            eax = t11;
            ecx = t12;
        }
        wr32(sp0 - 0x108u, loc_108 >> 1u);
        if ((int32_t)(esi + 1u) < 32)
        {
            edx = loc_108 >> 1u;
            esi = esi + 1u;
            loc_108 = loc_108 >> 1u;
            goto L_10098694;
        }
        edx = loc_108 >> 1u;
        wr32(sp0 - 0x104u, loc_104 + 4u);
        if ((int32_t)(ebp + 1u) < 16)
        {
            ebp = ebp + 1u;
            esi = loc_104 + 4u;
            edi = edi + 0x20u;
            loc_104 = loc_104 + 4u;
            goto L_1009868c;
        }
        ebp = rd32(sp0 - 0x118u);
        edi = rd32(sp0 - 0x11cu);
    }
    g->ebx = in_ebx;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098610(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
