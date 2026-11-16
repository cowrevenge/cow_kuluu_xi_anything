/* f_0x1011a150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011a150(Guest* g)
{
    double d10;
    double d11;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = (uint32_t)(int16_t)rd16(sp0 + 0x10u);
    t2 = t1 - (uint32_t)(int16_t)rd16(sp0 + 0x14u);
    wr32(sp0 + 0x10u, t2);
    d3 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) / (double)(int32_t)t1);
    wrf32(sp0 + 0x10u, (float)d3);
    if (!(d3 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_4 = t1;
    }
    else
    {
        loc_4 = t1;
        wr32(sp0 + 0x10u, 0u);
    }
    d4 = (double)rdf32(sp0 + 0x10u);
    t5 = rd16(sp0 + 0xcu);
    wrf32(sp0 + 0x14u, (float)fr(g, d4 * d4));
    t6 = rd32(sp0 + 0x14u);
    g->eax = t6;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x1011fc80u), arg1, 8, (uint32_t)(int16_t)arg2, (uint32_t)(int16_t)t5, t6, t6, 0x80808080u, 1u, 0u, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 + 0x14u, 1u);
    eax = t7;
    ecx = t8;
    edx = t9;
    esi = 0x80808080u;
    edi = (uint32_t)(int16_t)t5;
L_1011a1cb: ;
    d10 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x14u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 + 0xcu, (float)d10);
    g->edx = edx;
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032ae60u)) - fr(g, fr(g, d10 * (double)rdf32(COW_IMG(0x1032d444u))) * (double)rdf32(COW_IMG(0x1032ae60u))));
    fpush(g, d11);
    g->esp = sp0 - 0x14u;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    if (t12 <= 0x80u)
    {
        eax = t12;
        edx = t13;
    }
    else
    {
        edx = t13;
        eax = 0x80u;
    }
    if (rd32(sp0 + 0x14u) == 0u)
    {
        esi = (esi & 0xffffffu) | eax << 0x18u;
        eax = rd32(sp0 + 0xcu);
        loc_1c = 0u;
    }
    else
    {
        esi = (esi & 0xffffffu) | eax << 0x18u;
        eax = rd32(sp0 + 0xcu);
        loc_1c = 0x44u;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), arg1, 8, (uint32_t)(int16_t)arg2, edi, eax, eax, esi, 1u, loc_1c, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(sp0 + 0x14u) + 1u;
    t17 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t16);
    if ((int32_t)(t17 + 1u) < 2)
    {
        eax = t16;
        ecx = t14;
        edx = t15;
        goto L_1011a1cb;
    }
    eax = t16;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011a150(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
