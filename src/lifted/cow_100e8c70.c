/* f_0x100e8c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e8c70(Guest* g)
{
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9800u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_100e8ca9;
    }
    eax = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9800u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (eax == 1u) goto L_100e8ca2;
    eax = eax - 1u;
    if (eax == 4u)
    {
        loc_4 = 0u;
        goto L_100e8cb1;
    }
    edx = in_edx;
L_100e8c99: ;
    g->edx = edx;
    return 0u;
L_100e8ca2: ;
    loc_4 = 0u;
    loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | 1u;
L_100e8cb6: ;
    if (rd32(ecx + 0x97fcu) >= 0x14u)
    {
        edx = rd32(ecx + 0x97fcu);
        goto L_100e8c99;
    }
    edx = rd32(ecx + 0x97fcu);
    ebp = (uint8_t)loc_8 * 0x19u;
    esi = (uint8_t)loc_8;
L_100e8cd1: ;
    if (rd32(ebp * 4u + ecx + edx * 4u + 0x9548u) == 0u) goto L_100e8d51;
    if (rd32(ecx + esi * 0x8c4u + rd8(ecx + edx + esi * 0x64u + 0x9534u) * 0x70u + 0x57ecu) == 0u) goto L_100e8d51;
    edi = ecx + esi * 0x8c4u + rd8(ecx + edx + esi * 0x64u + 0x9534u) * 0x70u + 0x57d8u;
    edx = rd8(ecx + edx + esi * 0x64u + 0x9534u) * 0x70u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t1 = g->edx;
    cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    if (loc_4 == 0u)
    {
        eax = loc_4;
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_100e8d7c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (((rd32(ecx + 0x97f8u) ^ rd32(edi + 0x34u)) & 3u) == 0u)
    {
        eax = rd32(edi + 0x34u);
        goto L_100e8d7c;
    }
L_100e8d51: ;
    t4 = rd32(ecx + 0x97fcu) + 1u;
    wr32(ecx + 0x97fcu, t4);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x97fcu) < 0x14u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x97fcu);
        goto L_100e8cd1;
    }
    edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x97fcu);
    g->edx = edx;
    return 0u;
L_100e8ca9: ;
    loc_4 = 1u;
L_100e8cb1: ;
    loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
    goto L_100e8cb6;
L_100e8d7c: ;
    t2 = rd32(ecx + 0x97fcu) + 1u;
    wr32(ecx + 0x97fcu, t2);
    if (rd8(edi + 2u) != 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x100e9550u), 1, 0u);
        t3 = g->edx;
        edx = t3;
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
