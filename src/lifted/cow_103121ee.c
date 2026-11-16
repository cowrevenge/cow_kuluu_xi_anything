/* f_0x103121ee - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_103121ee(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, arg2 * arg3);
    if (arg2 * arg3 != 0u)
    {
        ebx = t1;
        if ((rd16(rd32(sp0 + 0x10u) + 0xcu) & 0x10cu) == 0u)
        {
            esi = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, 0x1000u);
            eax = in_eax;
            ecx = arg2 * arg3;
            edx = in_edx;
        }
        else
        {
            esi = rd32(sp0 + 0x10u);
            t2 = rd32(esi + 0x18u);
            wr32(sp0 + 0x10u, t2);
            eax = t2;
            ecx = arg2 * arg3;
            edx = in_edx;
        }
L_10312231: ;
        if ((rd16(esi + 0xcu) & 0x10cu) == 0u) goto L_10312263;
        if (rd32(esi + 4u) == 0u)
        {
            eax = rd32(esi + 4u);
            goto L_10312263;
        }
        eax = rd32(esi + 4u);
        if (ecx < eax)
        {
            edi = ecx;
        }
        else
        {
            edi = eax;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, ebx, rd32(esi), edi, in_edi, in_esi);
        t4 = g->edx;
        wr32(sp0 + 4u, rd32(sp0 + 4u) - edi);
        wr32(esi + 4u, rd32(esi + 4u) - edi);
        wr32(esi, edi + rd32(esi));
        eax = t3;
        edx = t4;
        ebx = ebx + edi;
L_103122ae: ;
        if (rd32(sp0 + 4u) != 0u) goto L_1031222e;
        eax = arg3;
    }
    else
    {
        eax = 0u;
        edx = in_edx;
    }
L_103122bb: ;
    g->edx = edx;
    return eax;
L_1031222e: ;
    ecx = rd32(sp0 + 4u);
    goto L_10312231;
L_10312263: ;
    if (ecx < rd32(sp0 + 0x10u)) goto L_10312296;
    if (rd32(sp0 + 0x10u) == 0u)
    {
        eax = ecx;
    }
    else
    {
        eax = ecx;
        t5 = cow_divu(g, eax, rd32(sp0 + 0x10u));
        t6 = cow_modu(g, eax, rd32(sp0 + 0x10u));
        eax = ecx - t6;
        edx = t6;
    }
    t7 = rd32(esi + 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t8 = cow_call_regs(g, COW_IMG(0x103195e1u), g->eax, g->ecx, edx, 1, 3, t7, ebx, eax);
    t9 = g->edx;
    if (t8 == 0u) goto L_103122c0;
    eax = t8;
    edx = t9;
    if (eax == 0xffffffffu) goto L_103122c6;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - eax);
    ebx = eax + ebx;
    goto L_103122ae;
L_10312296: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10319505u), 3, esi, in_edi, in_esi);
    t11 = g->edx;
    if (t10 == 0xffffffffu) goto L_103122ca;
    eax = t10;
    edx = t11;
    wr8(ebx, (uint8_t)eax);
    t12 = rd32(esi + 0x18u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 + 0x10u, t12);
    eax = t12;
    ebx = ebx + 1u;
    goto L_103122ae;
L_103122c0: ;
    wr32(esi + 0xcu, rd32(esi + 0xcu) | 0x10u);
L_103122ca: ;
    t13 = cow_divu(g, arg2 * arg3 - rd32(sp0 + 4u), arg2);
    t14 = cow_modu(g, arg2 * arg3 - rd32(sp0 + 4u), arg2);
    eax = t13;
    edx = t14;
    goto L_103122bb;
L_103122c6: ;
    wr32(esi + 0xcu, rd32(esi + 0xcu) | 0x20u);
    goto L_103122ca;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103121ee(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103121ee(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
