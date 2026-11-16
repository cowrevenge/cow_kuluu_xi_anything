/* f_0x100af330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100af330(Guest* g)
{
    double d5;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int8_t)((arg3 + t1) >> 8u) < 0) goto L_100af49c;
    eax = arg3 + t1;
    ecx = t2;
    edx = t3;
    if ((int32_t)eax >= 2048) goto L_100af378;
    if ((int32_t)eax < 80) goto L_100af367;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_100af367: ;
    wr32(eax * 4u + rd32(self + 0x260u), arg2);
    return;
L_100af378: ;
    if ((int32_t)eax >= 4352) goto L_100af3ae;
    if ((int32_t)(eax - 0x1000u) >= 96)
    {
        eax = eax - 0x1000u;
        goto L_100af39c;
    }
    eax = eax - 0x1000u;
    if ((int32_t)eax < 0) goto L_100af39c;
    wr32(COW_IMG(0x104887f8u) + eax * 4u, arg2);
    return;
L_100af39c: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_100af3ae: ;
    if ((int32_t)eax >= 4608) goto L_100af3e4;
    if ((int32_t)(eax - 0x1100u) >= 64)
    {
        eax = eax - 0x1100u;
        goto L_100af3d2;
    }
    eax = eax - 0x1100u;
    if ((int32_t)eax < 0) goto L_100af3d2;
    wr32(COW_IMG(0x10488a00u) + eax * 4u, arg2);
    return;
L_100af3d2: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_100af3e4: ;
    if ((int32_t)eax >= 6144) goto L_100af41a;
    if ((int32_t)(eax - 0x1700u) >= 32)
    {
        eax = eax - 0x1700u;
        goto L_100af408;
    }
    eax = eax - 0x1700u;
    if ((int32_t)eax < 0) goto L_100af408;
    wr32(COW_IMG(0x10488980u) + eax * 4u, arg2);
    return;
L_100af408: ;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_100af41a: ;
    if ((int32_t)eax >= 32640) goto L_100af49c;
    if (eax - 0x7f00u > 3u) goto L_100af49c;
    eax = eax - 0x7f00u;
    t4 = rd32(COW_IMG(0x100af4a0u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100af432u: goto L_100af432;
    case 0x100af44cu: goto L_100af44c;
    case 0x100af466u: goto L_100af466;
    case 0x100af480u: goto L_100af480;
    default: rt_fatal(g, COW_IMG(0x100af42bu), "switch");
    }
    return;
L_100af432: ;
    d8 = fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x140u, (float)d8);
    return;
L_100af44c: ;
    d7 = fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x144u, (float)d7);
    return;
L_100af466: ;
    d6 = fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x1032a22cu)));
    wrf32(rd32(self + 0x260u) + 0x148u, (float)d6);
    return;
L_100af480: ;
    d5 = fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    wrf32(rd32(self + 0x260u) + 0x154u, (float)d5);
L_100af49c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100af330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100af330(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
