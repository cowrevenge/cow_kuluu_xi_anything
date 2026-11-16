/* f_0x102230d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102230d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_144;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 368u);

    if (rd32(COW_IMG(0x1066714cu)) != 0u) goto L_102230e8;
    return 0u;
L_102230e8: ;
    wr32(sp0 - 0x148u, in_esi);
    g->esp = sp0 - 0x148u;
    cow_thiscall(g, COW_IMG(0x10223c90u), rd32(COW_IMG(0x10667150u)), 0);
    if ((int32_t)rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u) <= 0)
    {
        esi = 0u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
        wr32(sp0 - 0x14cu, in_ebx);
        wr32(sp0 - 0x150u, in_ebp);
        wr32(sp0 - 0x154u, in_edi);
        wr32(sp0 - 0x144u, eax);
        ebx = in_ebx;
        ebp = 0x160u;
        esi = 0u;
        loc_144 = eax;
L_10223115: ;
        if (rd8(rd32(COW_IMG(0x1066714cu)) + rd16(ebp + rd32(COW_IMG(0x10667150u))) * 0x30u + 2u) == (uint8_t)arg1)
        {
            edx = rd32(COW_IMG(0x1066714cu)) + rd16(ebp + rd32(COW_IMG(0x10667150u))) * 0x30u;
            t1 = rd8(COW_IMG(0x103d3c84u));
            t2 = rd32(sp0 - 0x100u);
            t3 = rd32(sp0 - 0x140u);
            edi = sp0 - 0xffu;
            eax = 0u;
            ecx = 0x3fu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            edi = sp0 - 0x13fu;
            eax = 0u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t4 = rd16(edx + 6u);
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr32(sp0 - 0x158u, t4);
            wr32(sp0 - 0x15cu, 0x135u);
            wr32(sp0 - 0x160u, 9u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            g->eax = eax;
            g->ecx = t4;
            g->esp = sp0 - 0x158u;
            t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x135u);
            t6 = g->ecx;
            wr32(sp0 - 0x15cu, t5);
            wr32(sp0 - 0x160u, sp0 - 0x140u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->edx = sp0 - 0x140u;
            g->esp = sp0 - 0x14cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, t5, rd32(sp0 - 0x158u), in_edi, in_ebp);
            t7 = g->edx;
            wr32(sp0 - 0x158u, sp0 - 0x140u);
            t8 = rd16(ebp + rd32(COW_IMG(0x10667150u)));
            wr32(sp0 - 0x15cu, t8);
            g->esp = sp0 - 0x15cu;
            t9 = cow_call_regs(g, COW_IMG(0x10223930u), t8, sp0 - 0x140u, t7, 1, 0);
            t10 = g->edx;
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->ecx = t9;
            g->esp = sp0 - 0x158u;
            t11 = cow_stdcall(g, COW_IMG(0x10223b10u), 1, rd32(sp0 - 0x15cu));
            t12 = g->ecx;
            wr32(sp0 - 0x15cu, t11);
            wr32(sp0 - 0x160u, esi + 1u);
            wr32(sp0 - 0x164u, COW_IMG(0x103861e4u));
            wr32(sp0 - 0x168u, sp0 - 0x100u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->ecx = t12;
            g->edx = sp0 - 0x100u;
            g->esp = sp0 - 0x154u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103861e4u), esi + 1u, t11, sp0 - 0x140u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x16cu, sp0 - 0x100u);
            g->ebx = (ebx & 0xffffff00u) | t1;
            g->esp = sp0 - 0x164u;
            cow_cdecl(g, COW_IMG(0x10077e30u), 2, sp0 - 0x100u, sp0 - 0x100u);
            ebx = (ebx & 0xffffff00u) | t1;
            esi = esi + 1u;
        }
        wr32(sp0 - 0x144u, loc_144 - 1u);
        if (loc_144 != 1u)
        {
            ebp = ebp + 2u;
            loc_144 = loc_144 - 1u;
            goto L_10223115;
        }
    }
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x148u);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102230d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102230d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
