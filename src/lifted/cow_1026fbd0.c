/* f_0x1026fbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026fbd0(Guest* g)
{
    double d10;
    double d11;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028d9c0u), 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1099aeccu));
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t4 <= 0)
    {
        eax = t4;
        ebx = in_ebx;
        goto L_1026fc6b;
    }
    ecx = t2;
    edx = t3;
    edi = t1;
    wr32(sp0 - 0x28u, in_ebx);
    ebp = 0u;
    esi = 0u;
L_1026fbf5: ;
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 - 0x30u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t5 = cow_cdecl(g, COW_IMG(0x1026ffa0u), 2, esi, sp0 - 0x18u);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
    }
    else
    {
        eax = t5;
        ecx = edi;
        edx = sp0 - 0x18u - edi;
        ebx = 3u;
        esi = sp0 - 0xcu - edi;
L_1026fc1f: ;
        d8 = (double)rdf32(ecx + edx);
        if (!(d8 < (double)rdf32(ecx)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(ecx), 0u);
        }
        else
        {
            t9 = rd32(ecx + edx);
            wr32(ecx, t9);
            eax = t9;
        }
        d10 = (double)rdf32(ecx + esi);
        d11 = (double)rdf32(ecx + 0xcu);
        if ((cow_fsw(g, d10, d11, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d10, d11, 0u) & 0x4100u;
        }
        else
        {
            t12 = rd32(ecx + esi);
            wr32(ecx + 0xcu, t12);
            eax = t12;
        }
        if (ebx != 1u)
        {
            ecx = ecx + 4u;
            ebx = ebx - 1u;
            goto L_1026fc1f;
        }
        ecx = ecx + 4u;
        ebp = 1u;
        esi = rd32(sp0 + 4u);
    }
    t13 = rd32(COW_IMG(0x1099aeccu));
    wr32(sp0 + 4u, esi + 1u);
    if ((int32_t)(esi + 1u) < (int32_t)t13)
    {
        esi = esi + 1u;
        goto L_1026fbf5;
    }
    eax = t13;
    if (ebp == 0u)
    {
        ebx = rd32(sp0 - 0x28u);
        goto L_1026fc6b;
    }
    ebx = rd32(sp0 - 0x28u);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return 0u;
L_1026fc6b: ;
    g->ebx = ebx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026fbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026fbd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
