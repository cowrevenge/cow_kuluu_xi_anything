/* f_0x100755a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100755a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(COW_IMG(0x1047d158u)) == 0u)
    {
        eax = in_eax;
        ecx = rd32(COW_IMG(0x1047d158u));
        edx = in_edx;
        goto L_100755ee;
    }
    ecx = rd32(COW_IMG(0x1047d158u));
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        goto L_100755c6;
    }
    eax = rd32(self);
    wr32(sp0 - 0xcu, in_ebx);
    if (rd32(COW_IMG(0x1047d200u)) != rd16(eax + 0x24u))
    {
        edx = rd16(eax + 0x24u);
        goto L_100755d9;
    }
L_100755c6: ;
    if (rd32(COW_IMG(0x1047d150u)) == rd16(eax + 0x26u))
    {
        loc_4 = self;
        goto L_1007568c;
    }
    edx = rd16(eax + 0x26u);
    eax = rd32(COW_IMG(0x1047d150u));
L_100755d9: ;
    if (ecx != 0u)
    {
        wr32(sp0 - 0xcu, 1u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    wr32(COW_IMG(0x1047d158u), 0u);
L_100755ee: ;
    if (rd32(self) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        wr32(sp0 - 0xcu, 0x10u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x10u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            wr32(COW_IMG(0x1047d158u), 0u);
        }
        else
        {
            eax = t5;
            edx = t6;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t7 = cow_thiscall(g, COW_IMG(0x1000cfb0u), eax, 0);
            wr32(COW_IMG(0x1047d158u), t7);
        }
        t8 = rd16(rd32(self) + 0x24u);
        wr32(COW_IMG(0x1047d200u), t8);
        wr32(sp0 - 0xcu, sp0 - 4u);
        t9 = rd16(rd32(self) + 0x26u);
        wr32(COW_IMG(0x1047d150u), t9);
        wr32(sp0 - 0x10u, t9);
        wr32(sp0 - 0x14u, t8);
        wr32(sp0 - 4u, 0u);
        g->eax = t8;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x1006a150u), rd32(COW_IMG(0x1047bfa8u)), 3, t8, t9, sp0 - 4u);
        t11 = rd32(COW_IMG(0x1047d158u));
        wr32(t11 + 4u, t10);
        t12 = rd32(COW_IMG(0x1047d158u));
        wr32(t12 + 8u, 0u);
        t13 = (t11 & 0xffff0000u) | rd16(COW_IMG(0x1047d150u));
        wr32(sp0 - 0xcu, t13);
        t14 = (t12 & 0xffff0000u) | rd16(COW_IMG(0x1047d200u));
        wr32(sp0 - 0x10u, t14);
        t15 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, t14, t13);
        wr32(rd32(COW_IMG(0x1047d158u)) + 0xcu, t15);
        loc_4 = 0u;
    }
L_1007568c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100755a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100755a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
