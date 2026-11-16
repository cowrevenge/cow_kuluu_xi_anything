/* f_0x102700e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102700e0(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(COW_IMG(0x1099aed0u)) + rd32(sp0 + 4u) * 0xacu;
    t2 = rd32(COW_IMG(0x1099aed0u));
    wr32(sp0 + 4u, t1);
    t3 = rd32(arg2 * 0xacu + t2 + 0xa8u);
    wr32(arg2 * 0xacu + t2 + 0x88u, arg3);
    if (t3 != 0u)
    {
        ebx = arg2 * 0xacu + t2;
        esi = t3;
        if ((int32_t)rd32(esi + 0x44u) <= 0) goto L_102701c7;
        eax = rd32(esi + 0x44u);
        ecx = arg2 * 0x2bu;
        edx = arg3;
        ebp = 0u;
        edi = 0u;
L_10270142: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x10279890u), 2, esi, edi);
        t5 = g->edx;
        if (rd32(t4) != 0xb0001u)
        {
            ecx = rd32(t4);
            edx = t5;
        }
        else
        {
            eax = t4;
            ecx = rd32(t4);
            edx = t5;
            ebp = eax;
            edi = rd32(esi + 0x44u);
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x44u))
        {
            eax = rd32(esi + 0x44u);
            edi = edi + 1u;
            goto L_10270142;
        }
        if (ebp != 0u)
        {
            if (rd32(rd32(sp0 + 4u) + 0xa8u) != 0u)
            {
                edi = rd32(rd32(sp0 + 4u) + 0xa8u);
                if ((int32_t)rd32(edi + 0x44u) <= 0) goto L_102701c7;
                eax = rd32(edi + 0x44u);
                esi = 0u;
L_1027017e: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t6 = cow_cdecl(g, COW_IMG(0x10279890u), 2, edi, esi);
                t7 = g->edx;
                if (rd32(t6) != 0xb0001u)
                {
                    ecx = rd32(t6);
                    edx = t7;
                }
                else
                {
                    eax = t6;
                    edx = t7;
                    t8 = rd32(ebx + 0x88u);
                    g->eax = eax;
                    g->ecx = t8;
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t9 = cow_cdecl(g, COW_IMG(0x1028de30u), 4, eax, ebp, 0u, t8);
                    t10 = g->ecx;
                    t11 = g->edx;
                    if (t9 == 0u)
                    {
                        ecx = t10;
                        edx = t11;
                    }
                    else
                    {
                        eax = t9;
                        ecx = t10;
                        edx = t11;
                        esi = t9;
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 4u;
                        t12 = cow_cdecl(g, COW_IMG(0x10279550u), 5, edi, esi, in_edi, in_esi, in_ebp);
                        t13 = g->ecx;
                        t14 = g->edx;
                        g->ecx = t13;
                        g->edx = t14;
                        g->esp = sp0 - 0x14u;
                        cow_cdecl(g, COW_IMG(0x1027a240u), 3, edi, esi, edi);
                        t15 = g->ecx;
                        t16 = g->edx;
                        ecx = t15;
                        edx = t16;
                    }
                    esi = rd32(edi + 0x44u);
                }
                if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0x44u))
                {
                    eax = rd32(edi + 0x44u);
                    esi = esi + 1u;
                    goto L_1027017e;
                }
            }
        }
    }
L_102701c7: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102700e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102700e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
