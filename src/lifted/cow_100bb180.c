/* f_0x100bb180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bb180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 > 4u)
    {
        ecx = 0u;
        goto L_100bb314;
    }
    eax = t1;
    edx = rd32(self + 0x20u);
    t2 = rd32(COW_IMG(0x100bb324u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100bb1aeu: goto L_100bb1ae;
    case 0x100bb1eeu: goto L_100bb1ee;
    case 0x100bb22eu: goto L_100bb22e;
    case 0x100bb2c0u: goto L_100bb2c0;
    default: rt_fatal(g, COW_IMG(0x100bb1a7u), "switch");
    }
    return;
L_100bb1ae: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x18u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t16 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x16cu, t16);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    g->esi = in_esi;
    return;
L_100bb1ee: ;
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
    {
        eax = rd16(self + 2u);
        wr32(sp0 - 0x18u, 2u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x174u, t15);
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    g->esi = in_esi;
    return;
L_100bb22e: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t9 = g->edx;
    wr32(sp0 - 0x20u, t8);
    g->esp = sp0 - 0x14u;
    t10 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t9, 3, t8, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t10 != 1u) goto L_100bb2ad;
    edi = eax == 2u;
    t11 = rd32(sp0 - 8u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u) == 0u) goto L_100bb2ad;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u);
    edx = t11;
    t12 = (rd32(ecx + 0x138u) & 0x7fffffffu) ^ (uint8_t)edi << 0x1fu;
    wr32(ecx + 0x138u, t12);
    if (edi != 0u) goto L_100bb2ad;
    wr32(sp0 - 0x18u, edx);
    g->esi = self;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x100aec70u), 3, edx, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    if ((uint8_t)t13 == 1u) goto L_100bb2ad;
    wr8(self + 0x25au, 1u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
L_100bb2ad: ;
    t14 = rd32(sp0 - 0x14u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t14;
    return;
L_100bb2c0: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, 2u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t4 = g->edx;
    wr32(sp0 - 0x20u, t3);
    g->esp = sp0 - 0x14u;
    t5 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t4, 3, t3, sp0 - 4u, sp0 - 8u);
    t6 = g->edx;
    if ((uint8_t)t5 == 1u)
    {
        edx = t6;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u;
            wr32(sp0 - 0x18u, 6u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
            wr32(rd32(edi) + 0x13cu, rd32(rd32(edi) + 0x13cu) | (t7 & 3u));
        }
    }
    ecx = 8u;
L_100bb314: ;
    wr16(self + 0x256u, (uint16_t)((uint16_t)ecx + rd16(self + 0x256u)));
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bb180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bb180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
