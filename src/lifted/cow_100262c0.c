/* f_0x100262c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100262c0(Guest* g)
{
    double d10;
    double d11;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_70;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x74u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x78u, sp0 - 0x6cu);
    wr32(sp0 - 0x6cu, 0x3f800000u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    g->eax = sp0 - 0x6cu;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10027ae0u), sp0 - 0x40u, 1, sp0 - 0x6cu);
    t3 = g->edx;
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    wr32(sp0 - 0x7cu, 0x100u);
    t4 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x54u, 0xffffffffu);
    wr32(sp0 - 0x44u, 0xffffffffu);
    wr32(sp0 - 0x60u, 0xc1000000u);
    wr32(sp0 - 0x50u, 0x41000000u);
    wr32(sp0 - 0x70u, 0u);
    esi = 0u;
    loc_70 = 0u;
L_10026339: ;
    wr32(sp0 - 0x78u, 0x42u);
    d5 = (double)(float)fr(g, (double)(int32_t)loc_70 - (double)rdf32(COW_IMG(0x1032a40cu)));
    wrf32(sp0 - 0x58u, (float)d5);
    d6 = (double)(float)fr(g, (double)(int32_t)loc_70 - (double)rdf32(COW_IMG(0x1032a40cu)));
    wrf32(sp0 - 0x48u, (float)d6);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t7);
    g->eax = t7;
    g->esp = sp0 - 0x74u;
    t8 = cow_thiscall(g, rd32(rd32(t7) + 0x130u), rd32(t7), 2, t7, 0x42u);
    wr32(sp0 - 0x78u, 0x10u);
    wr32(sp0 - 0x7cu, sp0 - 0x60u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, 2u);
    g->edx = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, sp0 - 0x60u, 0x10u);
    t9 = g->edx;
    wr32(sp0 - 0x70u, esi + 1u);
    if ((int32_t)(esi + 1u) < 17)
    {
        loc_70 = esi + 1u;
        esi = esi + 1u;
        goto L_10026339;
    }
    edx = t9;
    wr32(sp0 - 0x58u, 0xc1000000u);
    wr32(sp0 - 0x48u, 0x41000000u);
    wr32(sp0 - 0x70u, 0u);
    esi = 0u;
    loc_70 = 0u;
L_10026395: ;
    wr32(sp0 - 0x78u, 0x42u);
    d10 = (double)(float)fr(g, (double)(int32_t)loc_70 - (double)rdf32(COW_IMG(0x1032a40cu)));
    wrf32(sp0 - 0x60u, (float)d10);
    d11 = (double)(float)fr(g, (double)(int32_t)loc_70 - (double)rdf32(COW_IMG(0x1032a40cu)));
    wrf32(sp0 - 0x50u, (float)d11);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t12);
    g->eax = t12;
    g->esp = sp0 - 0x74u;
    t13 = cow_thiscall(g, rd32(rd32(t12) + 0x130u), rd32(t12), 2, t12, 0x42u);
    wr32(sp0 - 0x78u, 0x10u);
    wr32(sp0 - 0x7cu, sp0 - 0x60u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, 2u);
    g->edx = sp0 - 0x60u;
    t14 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, sp0 - 0x60u, 0x10u);
    t15 = g->edx;
    wr32(sp0 - 0x70u, esi + 1u);
    if ((int32_t)(esi + 1u) < 17)
    {
        edx = t15;
        loc_70 = esi + 1u;
        esi = esi + 1u;
        goto L_10026395;
    }
    eax = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x74u;
    t16 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t17 = g->edx;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100262c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100262c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
