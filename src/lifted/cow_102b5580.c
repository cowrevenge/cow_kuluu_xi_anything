/* f_0x102b5580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102b5580(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = self;
        goto L_102b5623;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    esi = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b5623;
    }
    ecx = rd32(eax + 0x14u);
    t1 = rd32(esi + 0x4cu);
    t2 = rd32(esi + 0x4cu);
    wr32(sp0 + 4u, t1);
    if (t2 == 0u) goto L_102b5649;
    if (rd32(esi + 0x50u) != 0u)
    {
        ebp = rd32(esi + 0x44u);
    }
    else
    {
        eax = rd32(esi + 0x50u);
        ebp = rd32(esi + 0x44u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, ebp, 0xcu, COW_IMG(0x103c1fb0u), 0xb4u, in_edi);
        wr32(esi + 0x50u, t3);
    }
    if (rd32(esi + 0x34u) != 0u)
    {
        eax = rd32(esi + 0x34u);
        edi = rd32(eax + 0x54u);
    }
    else
    {
        edi = 0u;
    }
    if (ebp == 0u) goto L_102b5649;
    esi = rd32(esi + 0x50u);
    ebx = esi;
    esi = rd32(sp0 + 4u) + 4u;
L_102b55ed: ;
    t4 = edi + rd32(esi + 4u) * 0xcu;
    t5 = edi + rd32(esi) * 0xcu;
    t6 = edi + rd32(esi - 4u) * 0xcu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102b4250u), 4, ebx, t6, t5, t4);
    if (ebp != 1u)
    {
        ebx = ebx + 0xcu;
        ebp = ebp - 1u;
        esi = esi + 0xcu;
        goto L_102b55ed;
    }
    return;
L_102b5623: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c1fb0u));
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beac8u));
L_102b5649: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b5580(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
