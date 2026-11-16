/* f_0x100a3310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a3310(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(sp0 + 8u) == 0u) goto L_100a3320;
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
    if ((uint8_t)eax < 8u) goto L_100a3324;
L_100a3320: ;
    wr8(sp0 + 8u, 0u);
L_100a3324: ;
    if ((uint8_t)arg1 == 1u) goto L_100a333c;
    if ((uint8_t)arg1 <= 9u)
    {
        eax = arg1;
        goto L_100a33c3;
    }
    if ((uint8_t)arg1 > 0xdu)
    {
        eax = arg1;
        goto L_100a33c3;
    }
L_100a333c: ;
    if (rd32(COW_IMG(0x10487f08u)) != 0u)
    {
        eax = arg1;
        goto L_100a33c3;
    }
    t1 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x100a2fd0u), arg1, t1, g->edx, 1, 6, COW_IMG(0x10480aa8u), arg1, 2u, t1, COW_IMG(0x10487038u), 0xe10u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xf0u, 4u);
    t5 = g->edx;
    g->esp = sp0 - 8u;
    t6 = cow_fastcall(g, COW_IMG(0x100748f0u), t4, t5, 0);
    t7 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t4 == 0u)
    {
        eax = t6;
        goto L_100a33bd;
    }
    eax = t6;
    edx = t7;
    esi = t4;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x100a2790u), eax, esi, edx, 0, 1, COW_IMG(0x10480aa8u));
    wr32(COW_IMG(0x10487f08u), t8);
    if (t8 == 0u)
    {
        eax = t8;
        goto L_100a33c3;
    }
    eax = t8;
    wr32(eax + 0x50u, COW_IMG(0x100a33e0u));
    t9 = rd32(COW_IMG(0x10487f08u));
    wr32(t9 + 0x54u, COW_IMG(0x100a33d0u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x100a28e0u), rd32(COW_IMG(0x10487f08u)), t9, 0);
    return (t10 & 0xffffff00u) | 1u;
L_100a33bd: ;
    wr32(COW_IMG(0x10487f08u), 0u);
L_100a33c3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
