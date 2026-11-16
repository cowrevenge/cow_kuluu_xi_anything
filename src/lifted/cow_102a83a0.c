/* f_0x102a83a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a83a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)(uint32_t)((int32_t)(arg2 - (uint32_t)((int32_t)arg2 >> 0x1fu)) >> 1u) <= (int32_t)(uint16_t)rd32(COW_IMG(0x109aaaa8u)))
    {
        eax = (uint32_t)((int32_t)(arg2 - (uint32_t)((int32_t)arg2 >> 0x1fu)) >> 1u);
        edx = rd32(COW_IMG(0x109aaaa8u));
        goto L_102a846d;
    }
    edx = rd32(COW_IMG(0x109aaaa8u));
    esi = (uint16_t)rd32(COW_IMG(0x109aaaa8u));
    eax = (uint32_t)((int32_t)(arg2 - (uint32_t)((int32_t)arg2 >> 0x1fu)) >> 1u) - esi;
    ecx = arg1;
    edi = in_edi;
L_102a83c7: ;
    if (esi > 4u) goto L_102a83d3;
    t1 = rd32(COW_IMG(0x102a8470u) + esi * 4u);
    switch (t1 - RD)
    {
    case 0x102a83f6u: goto L_102a83f6;
    case 0x102a840fu: goto L_102a840f;
    case 0x102a8428u: goto L_102a8428;
    case 0x102a8441u: goto L_102a8441;
    case 0x102a845au: goto L_102a845a;
    default: rt_fatal(g, COW_IMG(0x102a83ccu), "switch");
    }
    return 0;
L_102a83d3: ;
    if ((int32_t)(esi - 4u) <= 0)
    {
        esi = esi - 4u;
        goto L_102a83f6;
    }
    esi = esi - 4u;
L_102a83da: ;
    t2 = rd16(ecx);
    wr16(ecx + (uint16_t)edx * 2u, (uint16_t)(t2 + rd16(ecx + (uint16_t)edx * 2u)));
    if (esi != 1u)
    {
        ecx = ecx + 2u;
        edx = rd32(COW_IMG(0x109aaaa8u));
        esi = esi - 1u;
        edi = (edi & 0xffff0000u) | t2;
        goto L_102a83da;
    }
    ecx = ecx + 2u;
    edx = rd32(COW_IMG(0x109aaaa8u));
    esi = esi - 1u;
    edi = (edi & 0xffff0000u) | t2;
L_102a83f6: ;
    t3 = rd16(ecx);
    wr16(ecx + (uint16_t)edx * 2u, (uint16_t)(t3 + rd16(ecx + (uint16_t)edx * 2u)));
    ecx = ecx + 2u;
    edx = rd32(COW_IMG(0x109aaaa8u));
    esi = (esi & 0xffff0000u) | t3;
L_102a840f: ;
    t4 = rd16(ecx);
    wr16(ecx + (uint16_t)edx * 2u, (uint16_t)(t4 + rd16(ecx + (uint16_t)edx * 2u)));
    ecx = ecx + 2u;
    edx = rd32(COW_IMG(0x109aaaa8u));
    esi = (esi & 0xffff0000u) | t4;
L_102a8428: ;
    t5 = rd16(ecx);
    wr16(ecx + (uint16_t)edx * 2u, (uint16_t)(t5 + rd16(ecx + (uint16_t)edx * 2u)));
    ecx = ecx + 2u;
    edx = rd32(COW_IMG(0x109aaaa8u));
    esi = (esi & 0xffff0000u) | t5;
L_102a8441: ;
    wr16(ecx + (uint16_t)edx * 2u, (uint16_t)(rd16(ecx) + rd16(ecx + (uint16_t)edx * 2u)));
    ecx = ecx + 2u;
    edx = rd32(COW_IMG(0x109aaaa8u));
L_102a845a: ;
    if ((int32_t)(eax - (uint16_t)edx) > 0)
    {
        eax = eax - (uint16_t)edx;
        esi = (uint16_t)edx;
        goto L_102a83c7;
    }
    eax = eax - (uint16_t)edx;
L_102a846d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a83a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a83a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
