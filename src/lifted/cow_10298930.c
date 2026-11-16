/* f_0x10298930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10298930(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd32(arg1 + 0x24u) * rd32(arg1 + 0x1cu)) <= 0) goto L_10298a31;
    ebx = rd32(arg1 + 0x24u) * rd32(arg1 + 0x1cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx, COW_IMG(0x103bbc70u), 0x12du, in_edi, in_ebp, in_ebx, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edi = t1;
        loc_c = t1;
        goto L_10298991;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbc70u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbdb8u), ebx);
    return;
L_10298991: ;
    t7 = rd32(arg1 + 0x20u);
    t8 = t7 - (uint32_t)((int32_t)t7 >> 0x1fu);
    if ((int32_t)(uint32_t)((int32_t)t8 >> 1u) <= 0)
    {
        ecx = (uint32_t)((int32_t)t8 >> 1u);
        edx = t7 - 1u;
    }
    else
    {
        ecx = (uint32_t)((int32_t)t8 >> 1u);
        edx = t7 - 1u;
        eax = 0u;
        edx = edx * ebx;
        loc_8 = ecx;
        loc_4 = -ebx;
L_102989bc: ;
        t9 = rd32(arg1 + 0x28u);
        esi = eax + t9;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t10 = rd32(arg1 + 0x28u);
        esi = edx + t10;
        edi = eax + t10;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t11 = rd32(arg1 + 0x28u);
        esi = loc_c;
        edi = edx + t11;
        ecx = ebx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ebx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        if (loc_8 != 1u)
        {
            eax = eax + ebx;
            edx = edx + loc_4;
            edi = loc_c;
            loc_8 = loc_8 - 1u;
            goto L_102989b8;
        }
        ecx = loc_8 - 1u;
        edx = edx + loc_4;
        edi = loc_c;
    }
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bbc70u), 0x13eu);
L_10298a31: ;
    return;
L_102989b8: ;
    goto L_102989bc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10298930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
