/* f_0x10285fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10285fb0(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        edx = t4;
        esi = t1;
    }
    else
    {
        ecx = t3;
        edx = t4;
        esi = t1;
        wr32(sp0 - 0x10u, 1u);
        wr32(sp0 - 0x14u, 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10292150u), 3, sp0 + 4u, 4u, 1u);
        t5 = g->edx;
        edx = t5;
    }
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, sp0 + 4u, 1u, 4u, arg2, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ebx = t6;
        goto L_102860c1;
    }
    ecx = t7;
    edx = t8;
    ebx = t6;
    if (esi != 0xefbeddbau) goto L_10286033;
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, arg2);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, rd32(sp0 - 0xcu));
    t10 = g->ecx;
    wr32(sp0 - 0x14u, t9);
    wr32(sp0 - 0x18u, COW_IMG(0x103b8028u));
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x109a2788u)));
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8028u), t9, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (uint8_t)((ebx != 4u) - 1u);
L_10286033: ;
    if (esi != 0xffffffffu) goto L_10286068;
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, arg2);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, rd32(sp0 - 0xcu));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x14u, t11);
    wr32(sp0 - 0x18u, COW_IMG(0x103b7ff0u));
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x109a2788u)));
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b7ff0u), t11, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (uint8_t)((ebx != 4u) - 1u);
L_10286068: ;
    if (esi != 0xaaaaaaaau) goto L_102860a1;
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, arg2);
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, rd32(sp0 - 0xcu));
    t15 = g->edx;
    wr32(sp0 - 0x14u, t14);
    wr32(sp0 - 0x18u, COW_IMG(0x103b7fb8u));
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x109a2788u)));
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b7fb8u), t14, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (uint8_t)((ebx != 4u) - 1u);
L_102860a1: ;
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, arg2);
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, esi, esi);
    t17 = g->ecx;
    wr32(sp0 - 0x18u, t16);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b7f88u));
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x109a2788u)));
    cow_cdecl(g, COW_IMG(0x10314d95u), 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b7f88u), t16, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
L_102860c1: ;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (uint8_t)((ebx != 4u) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10285fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
