/* f_0x1023bb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1023bb60(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_edi, in_esi);
    t1 = g->edx;
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 4u);
    g->eax = t2;
    t4 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t5 = cow_fastcall(g, COW_IMG(0x100db170u), t4, t1, 2, t3, t2);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_edi, in_esi);
    t9 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = t8;
        goto L_1023bbfd;
    }
    eax = t8;
    edx = t9;
    esi = t3;
    wrf32(sp0 + 4u, (float)(double)(int32_t)arg4);
L_1023bb9b: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x100dbab0u), 0);
    eax = t10;
    ecx = rd32(COW_IMG(0x10669058u));
    edx = rd32(COW_IMG(0x10669058u)) + 0x14u;
L_1023bbaf: ;
    t11 = rd8(eax);
    wr8(edx, (uint8_t)t11);
    if ((uint8_t)t11 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t11;
        edx = edx + 1u;
        goto L_1023bbaf;
    }
    t12 = arg3 + rd32(rd32(COW_IMG(0x103601bcu)) + 0xcu);
    t13 = rd32(COW_IMG(0x1066905cu));
    t14 = rd32(COW_IMG(0x103601bcu));
    wr32(sp0 + 8u, t12);
    d15 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / (double)rdf32(sp0 + 4u));
    wrf32(t13 + 0x14u, (float)d15);
    g->eax = t12;
    g->edx = t14;
    t16 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x100db140u), t16, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == esi) goto L_1023bc03;
    eax = t17;
    ecx = t18;
    edx = t19;
    if ((int32_t)eax > 200) goto L_1023bbfd;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_edi, in_esi);
    t21 = g->edx;
    if ((int32_t)t20 >= 0)
    {
        eax = t20;
        edx = t21;
        goto L_1023bb9b;
    }
    eax = t20;
L_1023bbfd: ;
    return 0xffffffffu;
L_1023bc03: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023bb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023bb60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
