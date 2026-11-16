/* f_0x100ec860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec860(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg3 + 8u) > 9u)
    {
        eax = rd32(arg3 + 8u);
        ecx = self;
        edx = in_edx;
        goto L_100ec94b;
    }
    eax = rd32(arg3 + 8u);
    t1 = rd32(COW_IMG(0x100ec980u) + rd8(COW_IMG(0x100ec994u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x100ec880u: goto L_100ec880;
    case 0x100ec8afu: ecx = rd8(COW_IMG(0x100ec994u) + eax); goto L_100ec8af;
    case 0x100ec8fbu: goto L_100ec8fb;
    case 0x100ec92au: ecx = rd8(COW_IMG(0x100ec994u) + eax); goto L_100ec92a;
    case 0x100ec94bu: ecx = rd8(COW_IMG(0x100ec994u) + eax); edx = in_edx; goto L_100ec94b;
    default: rt_fatal(g, COW_IMG(0x100ec879u), "switch");
    }
    return 0;
L_100ec880: ;
    t8 = rd32(COW_IMG(0x104dfd98u));
    wr32(t8 + 0x19510u, 2u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1951bu, 1u);
    t9 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19514u, t9);
    g->edx = t8;
    return (t9 & 0xffffff00u) | 1u;
L_100ec8af: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100ed430u), 0);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19510u, 6u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1951bu, 1u);
    t6 = rd32(COW_IMG(0x104dfd98u));
    edi = rd32(COW_IMG(0x104dfd98u)) + 0x194c0u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t7 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19514u, t7);
    g->edx = t6;
    return (t7 & 0xffffff00u) | 1u;
L_100ec8fb: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19510u, 5u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x1951bu, 1u);
    t5 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19514u, t5);
    return (t5 & 0xffffff00u) | 1u;
L_100ec92a: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x100ed430u), 0);
    t2 = g->ecx;
    t3 = rd32(COW_IMG(0x104dfd98u));
    wr32(t3 + 0x19510u, 8u);
    t4 = rd32(COW_IMG(0x104dfd98u));
    wr8(t4 + 0x1951bu, 1u);
    eax = t4;
    ecx = t2;
    edx = t3;
L_100ec94b: ;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x100ed430u), 0);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19510u, 7u);
    t10 = rd32(COW_IMG(0x104dfd98u));
    wr8(t10 + 0x1951bu, 1u);
    t11 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x19514u, t11);
    g->edx = t10;
    return (t11 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
