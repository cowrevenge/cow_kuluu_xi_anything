/* f_0x100fc180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fc180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 268u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100fc198;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    return eax & 0xffffff00u;
L_100fc198: ;
    t1 = rd32(eax + 0x3c35cu) | arg1;
    wr32(eax + 0x3c35cu, t1);
    if (!(rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu) & 1u))
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu);
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100fc1c7;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
    wr32(sp0 - 0x104u, COW_IMG(0x1036246cu));
    loc_104 = COW_IMG(0x1036246cu);
L_100fc27f: ;
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = arg1;
L_100fc284: ;
    g->edx = edx;
    g->esp = sp0 - 0xf4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_104, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u));
    t2 = g->edx;
    edx = t2;
L_100fc28c: ;
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    g->esp = sp0 - 0x100u;
    t3 = cow_call_regs(g, COW_IMG(0x100f0550u), g->eax, g->ecx, edx, 1, 1, sp0 - 0x100u);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_100fc1c7: ;
    if ((eax & 2u) == 0u) goto L_100fc1da;
    wr32(sp0 - 0x104u, COW_IMG(0x103514e4u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x103514e4u);
    goto L_100fc284;
L_100fc1da: ;
    if ((eax & 4u) == 0u) goto L_100fc1ed;
    wr32(sp0 - 0x104u, COW_IMG(0x10362468u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = arg1;
    edx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x10362468u);
    goto L_100fc284;
L_100fc1ed: ;
    if ((eax & 8u) == 0u) goto L_100fc1fb;
    wr32(sp0 - 0x104u, COW_IMG(0x103514ecu));
    loc_104 = COW_IMG(0x103514ecu);
    goto L_100fc27f;
L_100fc1fb: ;
    if ((eax & 0x10u) == 0u) goto L_100fc20b;
    wr32(sp0 - 0x104u, COW_IMG(0x10362464u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x10362464u);
    goto L_100fc284;
L_100fc20b: ;
    if ((eax & 0x20u) == 0u) goto L_100fc21b;
    wr32(sp0 - 0x104u, COW_IMG(0x1034f2a4u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = arg1;
    edx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x1034f2a4u);
    goto L_100fc284;
L_100fc21b: ;
    if ((eax & 0x40u) == 0u) goto L_100fc226;
    wr32(sp0 - 0x104u, COW_IMG(0x10362460u));
    loc_104 = COW_IMG(0x10362460u);
    goto L_100fc27f;
L_100fc226: ;
    if ((int8_t)eax >= 0) goto L_100fc236;
    wr32(sp0 - 0x104u, COW_IMG(0x1036245cu));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x1036245cu);
    goto L_100fc284;
L_100fc236: ;
    if (!(eax >> 8u & 1u)) goto L_100fc247;
    wr32(sp0 - 0x104u, COW_IMG(0x10362458u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = arg1;
    edx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x10362458u);
    goto L_100fc284;
L_100fc247: ;
    if ((eax >> 8u & 2u) == 0u) goto L_100fc253;
    wr32(sp0 - 0x104u, COW_IMG(0x10354010u));
    loc_104 = COW_IMG(0x10354010u);
    goto L_100fc27f;
L_100fc253: ;
    if ((eax >> 8u & 4u) == 0u) goto L_100fc264;
    wr32(sp0 - 0x104u, COW_IMG(0x10357cccu));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x10357cccu);
    goto L_100fc284;
L_100fc264: ;
    if ((eax >> 8u & 0x20u) == 0u) goto L_100fc275;
    wr32(sp0 - 0x104u, COW_IMG(0x10357cc8u));
    wr32(sp0 - 0x108u, sp0 - 0x100u);
    ecx = arg1;
    edx = sp0 - 0x100u;
    loc_104 = COW_IMG(0x10357cc8u);
    goto L_100fc284;
L_100fc275: ;
    if ((eax >> 8u & 0x40u) == 0u) goto L_100fc28c;
    wr32(sp0 - 0x104u, COW_IMG(0x10357cc4u));
    loc_104 = COW_IMG(0x10357cc4u);
    goto L_100fc27f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fc180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fc180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
