/* f_0x1025bfd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025bfd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1025bff3;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1025c099;
    if (eax == 3u) goto L_1025c099;
L_1025bff3: ;
    if ((int32_t)eax <= 0) goto L_1025c0ad;
    if ((int32_t)eax <= 2) goto L_1025c099;
    if (eax != 3u) goto L_1025c0ad;
    wr32(sp0 - 8u, sp0 + 0xcu);
    wr32(sp0 - 0xcu, arg3);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x1011daa0u), ecx, 2, arg3, sp0 + 0xcu);
    if ((uint16_t)arg3 - 0x85bfu > 0x1cu) goto L_1025c089;
    t1 = rd32(COW_IMG(0x1025c0d4u) + rd8(COW_IMG(0x1025c0ecu) + (uint16_t)arg3 - 0x85bfu) * 4u);
    switch (t1 - RD)
    {
    case 0x1025c043u: edx = rd8(COW_IMG(0x1025c0ecu) + (uint16_t)arg3 - 0x85bfu); goto L_1025c043;
    case 0x1025c051u: edx = rd8(COW_IMG(0x1025c0ecu) + (uint16_t)arg3 - 0x85bfu); goto L_1025c051;
    case 0x1025c05fu: goto L_1025c05f;
    case 0x1025c06du: edx = rd8(COW_IMG(0x1025c0ecu) + (uint16_t)arg3 - 0x85bfu); goto L_1025c06d;
    case 0x1025c07bu: edx = rd8(COW_IMG(0x1025c0ecu) + (uint16_t)arg3 - 0x85bfu); goto L_1025c07b;
    case 0x1025c089u: goto L_1025c089;
    default: rt_fatal(g, COW_IMG(0x1025c03cu), "switch");
    }
    return 0;
L_1025c043: ;
    t6 = rd32(sp0 - 4u);
    wr8(arg1, 0x45u);
    g->esi = t6;
    g->edx = edx;
    return 1u;
L_1025c051: ;
    t5 = rd32(sp0 - 4u);
    wr8(arg1, 0x41u);
    g->esi = t5;
    g->edx = edx;
    return 1u;
L_1025c05f: ;
    t4 = rd32(sp0 - 4u);
    wr8(arg1, 0x55u);
    g->esi = t4;
    g->edx = arg1;
    return 1u;
L_1025c06d: ;
    t3 = rd32(sp0 - 4u);
    wr8(arg1, 0x49u);
    g->esi = t3;
    g->edx = edx;
    return 1u;
L_1025c07b: ;
    t2 = rd32(sp0 - 4u);
    wr8(arg1, 0x4fu);
    g->esi = t2;
    g->edx = edx;
    return 1u;
L_1025c089: ;
    wr32(sp0 - 8u, arg3);
    wr32(sp0 - 0xcu, arg1);
    g->eax = (uint16_t)arg3 - 0x85bfu;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1011dc00u), 2, arg1, arg3);
    t8 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t8;
    return t7;
L_1025c099: ;
    wr32(sp0 - 8u, arg3);
    wr32(sp0 - 0xcu, arg1);
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x1011dc00u), 2, arg1, arg3);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1025c0ad: ;
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, arg3);
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, arg3);
    esi = arg3;
    edi = arg1;
    ecx = t11 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t11 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->edx = t11;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025bfd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025bfd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
