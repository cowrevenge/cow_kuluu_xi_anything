/* f_0x10024a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10024a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 116u);

    if ((int16_t)rd16(sp0 + 4u) <= 0)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u);
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, in_ebp);
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x34u, in_edi);
        t1 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, eax);
        ecx = self;
        esi = in_esi;
        edi = t1;
L_10024a8c: ;
        t2 = arg3 + (rd16(edi + 2u) & 0x7fffu) * 0x3cu;
        t3 = rd16(edi + 2u);
        t4 = rd16(edi);
        t5 = rd16(edi + 4u);
        wr32(sp0 + 8u, t2);
        t6 = arg3 + (t4 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x38u, t6);
        wr32(sp0 - 0x3cu, t2 + 0xcu);
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x24u, t2 + 0xcu, t6);
        wr32(sp0 - 0x44u, t6);
        t7 = arg3 + (t5 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x48u, t7);
        wr32(sp0 - 0x4cu, sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, t7, t6);
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = sp0 - 0x18u;
        g->esp = sp0 - 0x4cu;
        t8 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xcu, sp0 - 0x18u, sp0 - 0x24u);
        t9 = g->edx;
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        t10 = arg3 + (t4 & 0x7fffu) * 0x3cu + 0x30u;
        wr32(sp0 - 0x60u, t10);
        g->ecx = sp0 - 0xcu;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, t10, sp0 - 0xcu);
        t11 = g->ecx;
        wr32(sp0 - 0x64u, sp0 - 0xcu);
        t12 = rd32(sp0 + 8u) + 0x30u;
        wr32(sp0 - 0x68u, t12);
        g->eax = t12;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x60u;
        t13 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, t12, sp0 - 0xcu);
        t14 = g->edx;
        wr32(sp0 - 0x6cu, sp0 - 0xcu);
        t15 = arg3 + (t5 & 0x7fffu) * 0x3cu + 0x30u;
        wr32(sp0 - 0x70u, t15);
        g->ecx = sp0 - 0xcu;
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, t15, sp0 - 0xcu);
        t16 = g->ecx;
        t17 = rd32(sp0 + 4u) - 1u;
        t18 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t17);
        if (t18 != 1u)
        {
            eax = t17;
            ecx = t16;
            esi = t15;
            edi = edi + 0xau;
            goto L_10024a8c;
        }
        ebx = rd32(sp0 - 0x28u);
        ebp = rd32(sp0 - 0x2cu);
        esi = rd32(sp0 - 0x30u);
        edi = rd32(sp0 - 0x34u);
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10024a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10024a70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
