/* f_0x100380f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100380f0(Guest* g)
{
    double d11;
    double d17;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(COW_IMG(0x10463938u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10463938u));
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        goto L_100381c6;
    }
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, 0x40u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x40u, 4u);
    t2 = g->edx;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
    t4 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t1 == 0u)
    {
        eax = t3;
        edx = t4;
        ebx = in_ebx;
        edi = in_edi;
        goto L_100381c6;
    }
    eax = t3;
    edx = t4;
    esi = t1;
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
    wr32(esi, COW_IMG(0x1032a9bcu));
    t5 = rd32(COW_IMG(0x1047d128u));
    wr32(COW_IMG(0x10463938u), esi);
    t6 = ((arg1 & 0xff00u) | arg1 << 0x10u) << 8u | (uint8_t)(arg1 >> 0x10u) << 8u | arg1 >> 0x18u;
    wr32(sp0 - 0x10u, t6);
    wr32(sp0 - 0x14u, 0x3du);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->edx = t6;
    t7 = rd32(rd32(t5 + 0x40008u));
    t8 = cow_thiscall(g, COW_IMG(0x10072290u), t7, 3, sp0 + 4u, 0x3du, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(t8) == 0u)
    {
        eax = rd32(t8);
        ecx = t9;
        edx = t10;
        goto L_100381b6;
    }
    eax = rd32(t8);
    ecx = t9;
    edx = t10;
    if (rd32(eax) == 0u) goto L_100381b6;
    edi = rd32(eax);
    g->edx = edx;
    d11 = fr(g, fr(g, (double)(int32_t)rd32(COW_IMG(0x10351710u)) * (double)rdf32(sp0 + 8u)) * (double)rdf32(COW_IMG(0x1032a34cu)));
    fpush(g, d11);
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    wr32(sp0 - 0x10u, t12);
    wr32(sp0 - 0x14u, 0x40u);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10036f00u), edi, 2, 0x40u, t12);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = cow_take_float(g);
    t18 = rd32(sp0 - 0xcu);
    wr32(esi + 0x38u, t14);
    wr32(esi + 0x34u, 0x42f00000u);
    wr8(esi + 0x3cu, (uint8_t)arg3);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 4u);
    g->edi = t18;
    g->edx = t16;
    fpush(g, d17);
    return t14;
L_100381b6: ;
    t19 = rd32(sp0 - 0xcu);
    wr32(esi + 0x34u, 0u);
    wr8(esi + 0x3cu, (uint8_t)arg3);
    ebx = rd32(sp0 - 8u);
    edi = t19;
L_100381c6: ;
    g->ebx = ebx;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100380f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100380f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
