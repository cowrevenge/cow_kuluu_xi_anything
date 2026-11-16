/* f_0x10139a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10139a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10139a64;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10139ac0;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_10139ab2;
    }
    ecx = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg1 - 6u, ecx, g->edx, 0, 2, 0xau, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
L_10139ac0: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        if (rd16(eax + 0x4cu) != rd16(self + 0x42u))
        {
            edi = (in_edi & 0xffff0000u) | rd16(eax + 0x4cu);
            if ((uint16_t)edi != 0xbu)
            {
                loc_18 = 0xbu;
            }
            else
            {
                loc_18 = 7u;
            }
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t16 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, loc_18);
            t17 = g->edx;
            g->edx = t17;
            g->esp = sp0 - 0xcu;
            t18 = cow_thiscall(g, COW_IMG(0x1011aaf0u), rd32(self + 8u), 3, t16, 0u, 1u);
            t19 = g->edx;
            wr16(self + 0x42u, (uint16_t)edi);
            eax = t18;
            edx = t19;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10139a64: ;
    if ((uint32_t)(int16_t)arg2 == 9u) goto L_10139aa7;
    if ((uint32_t)(int16_t)arg2 == 0xau)
    {
        eax = (uint32_t)(int16_t)arg2 - 0xau;
        edx = in_edx;
        goto L_10139ab2;
    }
    if ((uint32_t)(int16_t)arg2 == 0xbu)
    {
        g->edx = in_edx;
        t6 = rd32(COW_IMG(0x1057824cu));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10140d90u), t6, 4, 0u, 0u, COW_IMG(0x10139a20u), 0u);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    else
    {
        t3 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
        g->esp = sp0 - 0xcu;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t3, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        wr8(self + 0x40u, (uint8_t)arg2);
        ecx = t4;
        edx = t5;
    }
    goto L_10139ac0;
L_10139aa7: ;
    g->ebx = (in_ebx & 0xffff0000u) | (uint16_t)arg2;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x10139cd0u), self, in_edx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10139abb;
    }
    eax = t9;
    edx = t11;
L_10139ab2: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10139e10u), self, 0);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    goto L_10139ac0;
L_10139abb: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    goto L_10139ac0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139a40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
