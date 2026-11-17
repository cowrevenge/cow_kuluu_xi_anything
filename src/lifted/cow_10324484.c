/* f_0x10324484 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10324484(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if ((uint16_t)arg1 == 0xffffu)
    {
        eax = in_eax;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        goto L_10324503;
    }
    if (rd32(arg2 + 0xcu) & 1u)
    {
        eax = rd32(arg2 + 0xcu);
        goto L_103244a5;
    }
    eax = rd32(arg2 + 0xcu);
    if ((eax & 0x80u) == 0u)
    {
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        goto L_10324503;
    }
    if ((eax & 2u) != 0u)
    {
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        goto L_10324503;
    }
L_103244a5: ;
    if (rd32(arg2 + 8u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x10u, arg2);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10323b8au), 1, arg2);
        t1 = g->edx;
        edx = t1;
    }
    if ((rd32(arg2 + 0xcu) & 0x40u) != 0u)
    {
        eax = rd32(arg2 + 0xcu);
        goto L_10324545;
    }
    eax = rd32(arg2 + 0xcu);
    if (rd32(arg2 + 0x10u) == 0xffffffffu)
    {
        ecx = COW_IMG(0x103d2c10u);
    }
    else
    {
        ecx = rd32(arg2 + 0x10u);
        edx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u);
        ecx = (ecx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u);
    }
    if ((rd8(ecx + 4u) & 0x80u) == 0u) goto L_10324545;
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10323bf7u), g->eax, ecx, edx, 1, 2, sp0 + 4u, arg1);
    t3 = g->edx;
    if (t2 != 0xffffffffu)
    {
        eax = t2;
        edx = t3;
        goto L_1032450b;
    }
    eax = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x10319c89u), arg1, edx, 0);
    wr32(t4, 0x2au);
    eax = t4;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_10324503: ;
    eax = (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
L_10324507: ;
    g->ebx = loc_8;
    g->esi = loc_c;
    g->ebp = loc_4;
    return eax;
L_1032450b: ;
    if (rd32(arg2) != rd32(arg2 + 8u)) goto L_1032451c;
    ecx = rd32(arg2);
    if (rd32(arg2 + 4u) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_10324503;
    }
    wr32(arg2, eax + ecx);
L_1032451c: ;
    if (eax != 1u)
    {
        wr32(arg2, rd32(arg2) - 1u);
        wr8(rd32(arg2), (uint8_t)(arg1 >> 8u));
        edx = (edx & 0xffffff00u) | (uint8_t)(arg1 >> 8u);
    }
    wr32(arg2, rd32(arg2) - 1u);
    wr8(rd32(arg2), (uint8_t)arg1);
    wr32(arg2 + 4u, eax + rd32(arg2 + 4u));
    t5 = (rd32(arg2 + 0xcu) & 0xffffff00u) | (rd32(arg2 + 0xcu) & 0xefu) | 1u;
    wr32(arg2 + 0xcu, t5);
    eax = (t5 & 0xffff0000u) | (uint16_t)arg1;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    goto L_10324507;
L_10324545: ;
    if (rd32(arg2) != rd32(arg2 + 8u)) goto L_10324557;
    ecx = rd32(arg2);
    if (rd32(arg2 + 4u) != 0u)
    {
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_esi;
        goto L_10324503;
    }
    wr32(arg2, ecx + 2u);
L_10324557: ;
    wr32(arg2 + 4u, rd32(arg2 + 4u) + 2u);
    wr32(arg2, rd32(arg2) - 2u);
    t6 = (eax & 0xffffff00u) | (eax & 0xefu) | 1u;
    wr32(arg2 + 0xcu, t6);
    wr16(rd32(arg2), (uint16_t)arg1);
    eax = (rd32(arg2) & 0xffff0000u) | rd16(rd32(arg2));
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    goto L_10324507;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324484(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324484(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
