/* f_0x1029bb80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1029bb80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 5u) goto L_1029bc6c;
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        esi = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u);
        edi = 1u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        esi = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u);
        wr32(eax + 0xa08u, esi + 2u);
        eax = rd32(COW_IMG(0x1099d200u));
        edi = 0u;
    }
    if ((int32_t)(arg2 & 0x80000001u) >= 0)
    {
        ebp = arg2 & 0x80000001u;
        zf = (arg2 & 0x80000001u) == 0u;
    }
    else
    {
        ebp = ((arg2 & 0x80000001u) - 1u | 0xfffffffeu) + 1u;
        zf = ((arg2 & 0x80000001u) - 1u | 0xfffffffeu) + 1u == 0u;
    }
    if (!zf)
    {
        t1 = rd32(eax + 0xa08u) + 1u;
        wr32(eax + 0xa08u, t1);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    t2 = arg2 + rd32(eax + 0xa08u);
    wr32(eax + 0xa08u, t2);
    t3 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) * 2u;
    t4 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t2, 4, t4, t3, COW_IMG(0x103bc70cu), 0xc8u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu, t5);
    if (edi != 0u)
    {
        eax = esi * 2u + rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu);
        edx = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = esi * 2u + rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu);
        edx = rd32(COW_IMG(0x1099d200u));
        t6 = rd16(eax - 2u);
        wr16(eax, (uint16_t)t6);
        t7 = rd16(arg3);
        wr16(eax + 2u, (uint16_t)t7);
        eax = eax + 4u;
        edx = ((edx | t6) & 0xffff0000u) | t7;
    }
    if ((int32_t)arg2 <= 0)
    {
        ecx = arg3;
        goto L_1029bc58;
    }
    ecx = arg3;
    ebx = arg2;
L_1029bc49: ;
    t8 = rd16(ecx);
    wr16(eax, (uint16_t)t8);
    if (ebx != 1u)
    {
        eax = eax + 2u;
        ecx = ecx + 4u;
        edx = (edx & 0xffff0000u) | t8;
        ebx = ebx - 1u;
        goto L_1029bc49;
    }
    eax = eax + 2u;
    ecx = ecx + 4u;
L_1029bc58: ;
    if (ebp == 0u) goto L_1029bcea;
    wr16(eax, rd16(ecx - 4u));
    return;
L_1029bc6c: ;
    if (arg1 == 4u)
    {
        t9 = arg2 + rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0xa10u, t9);
        t10 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u) * 2u;
        t11 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa14u);
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), self, 4, t11, t10, COW_IMG(0x103bc70cu), 0xd6u);
        wr32(rd32(COW_IMG(0x1099d200u)) + 0xa14u, t12);
        if ((int32_t)arg2 > 0)
        {
            eax = 0u;
            edx = arg3;
            ebx = in_ebx;
L_1029bcc5: ;
            t13 = rd16(edx);
            wr16(eax * 2u + rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u) * 2u + rd32(rd32(COW_IMG(0x1099d200u)) + 0xa14u) - arg2 * 2u, (uint16_t)t13);
            if ((int32_t)(eax + 1u) < (int32_t)arg2)
            {
                eax = eax + 1u;
                edx = edx + 4u;
                ebx = (ebx & 0xffff0000u) | t13;
                goto L_1029bcc5;
            }
        }
    }
L_1029bcea: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029bb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029bb80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
