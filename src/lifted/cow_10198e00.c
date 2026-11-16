/* f_0x10198e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198e00(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x96u);
        t1 = rd32(self + 0x38u);
        wr32(sp0 - 0x2cu, t1);
        t2 = rd32(eax + rd32(self + 0x20u) * 0x10u + 4u);
        wr32(sp0 - 0x30u, t2);
        wr32(sp0 - 0x34u, 0xbu);
        g->eax = eax;
        g->edx = t2;
        g->esp = sp0 - 0x2cu;
        t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t2);
        t4 = g->edx;
        wr32(sp0 - 0x30u, t3);
        t5 = (uint32_t)(int16_t)rd16(self + 0x42u) + 0x14u;
        wr32(sp0 - 0x34u, t5);
        t6 = (uint32_t)(int16_t)rd16(self + 0x40u) + 0x1eu;
        wr32(sp0 - 0x38u, t6);
        g->esp = sp0 - 0x20u;
        cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t6, 6, t6, t5, t3, rd32(sp0 - 0x2cu), 0x96u, 0u);
    }
    wr32(sp0 - 0xcu, 0xffffffc4u - self);
    ebx = self + 0x28u;
    esi = self + 0x3cu;
L_10198e76: ;
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 1u);
    t7 = esi - self - 0x3bu;
    wr32(sp0 - 0x2cu, t7);
    wr32(sp0 - 0x30u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = self;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t7, 1u, 1u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x10u, rd8(esi));
    wr32(sp0 - 0x28u, 8u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, rd32(ebx));
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, rd32(ebx));
    d8 = (double)(float)fr(g, fr(g, (double)(int32_t)rd8(esi) * (double)rdf32(COW_IMG(0x10336c44u))) * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(sp0 - 0x38u, (float)d8);
    wr32(sp0 - 0x3cu, 2u);
    wr32(sp0 - 0x40u, 0xdu);
    g->eax = 2u;
    t9 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x24u), 8, 0xdu, 2u, cow_f2bits(d8), 0x3f800000u, rd32(ebx), 0u, 8u, 0u);
    if ((int32_t)(esi - self - 0x3bu) < 3)
    {
        ebx = ebx + 4u;
        esi = esi + 1u;
        goto L_10198e76;
    }
    eax = t9;
    edx = esi - self - 0x3bu;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
