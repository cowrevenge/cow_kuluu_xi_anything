/* f_0x1026ffa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026ffa0(Guest* g)
{
    double d11;
    double d12;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, arg2);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1028d9c0u), 1, arg2);
    if (rd32(rd32(COW_IMG(0x1099aed0u)) + rd32(sp0 + 4u) * 0xacu + 0xa8u) != 0u)
    {
        ebx = rd32(rd32(COW_IMG(0x1099aed0u)) + rd32(sp0 + 4u) * 0xacu + 0xa8u);
        goto L_1026ffdf;
    }
    eax = rd32(sp0 + 4u) * 0x15u;
    return 0xffffffffu;
L_1026ffdf: ;
    wr32(sp0 - 0x30u, in_ebp);
    if ((int32_t)rd32(ebx + 0x58u) <= 0)
    {
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x34u, in_edi);
        t1 = sp0 - 0x20u - arg2;
        wr32(sp0 + 4u, t1);
        t2 = sp0 - 0x10u - arg2;
        wr32(sp0 - 0x24u, t2);
        ebp = 0u;
        loc_24 = t2;
L_10270002: ;
        t3 = rd32(ebp * 4u + rd32(ebx + 0x4cu)) + 0x14u;
        wr32(sp0 - 0x38u, t3);
        t4 = rd32(ebp * 4u + rd32(ebx + 0x50u));
        wr32(sp0 - 0x3cu, t4);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->edx = t3;
        t5 = rd32(ebp * 4u + rd32(ebx + 0x4cu));
        g->esp = sp0 - 0x34u;
        t6 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x20u, t4, t3);
        t7 = g->edx;
        wr32(sp0 - 0x44u, t5 + 0x20u);
        wr32(sp0 - 0x48u, t4);
        wr32(sp0 - 0x4cu, sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        t8 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x10u, t4, t5 + 0x20u);
        eax = t8;
        ecx = arg2;
        esi = 3u;
L_10270038: ;
        d9 = (double)rdf32(ecx + rd32(sp0 + 4u));
        if (!(d9 < (double)rdf32(ecx)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(ecx), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(ecx), 0u);
            edx = rd32(sp0 + 4u);
            t10 = rd32(ecx + edx);
            wr32(ecx, t10);
        }
        d11 = (double)rdf32(ecx + rd32(sp0 - 0x24u));
        d12 = (double)rdf32(ecx + 0xcu);
        if ((cow_fsw(g, d11, d12, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d11, d12, 0u) & 0x4100u;
        }
        else
        {
            edx = rd32(sp0 - 0x24u);
            t13 = rd32(ecx + edx);
            wr32(ecx + 0xcu, t13);
            eax = t13;
        }
        if (esi != 1u)
        {
            ecx = ecx + 4u;
            esi = esi - 1u;
            goto L_10270038;
        }
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x58u))
        {
            ebp = ebp + 1u;
            goto L_10270002;
        }
        edi = rd32(sp0 - 0x34u);
    }
    g->edi = edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ffa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026ffa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
