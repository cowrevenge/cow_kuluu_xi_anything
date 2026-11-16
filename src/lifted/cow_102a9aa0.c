/* f_0x102a9aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102a9aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 != 0u)
    {
        g->edx = in_edx;
        t1 = rd32(arg1);
        g->esp = sp0 - 0x24u;
        t2 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        t3 = g->edx;
        t4 = rd32(sp0 + 0x14u);
        wr32(t2 + 0x14u, t4);
        eax = t2 - t1;
        ecx = 0u;
        edx = t3;
        ebx = t2;
        edi = t1 + 0x54u;
        loc_8 = t1;
        loc_14 = t2;
        loc_10 = 0u;
        loc_4 = t2 - t1;
L_102a9ade: ;
        if (rd32(edi - 0x3cu) != 0u)
        {
            esi = rd32(edi - 0x3cu);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x102a99a0u), 6, ebx, ecx, esi, in_edi, in_esi, in_ebp);
            t5 = g->edx;
            wr32(sp0 + 0x14u, 0u);
            if ((int32_t)arg4 <= 0)
            {
                eax = arg4;
                edx = t5;
            }
            else
            {
                ebx = arg2;
                ebp = 0u;
L_102a9b1c: ;
                if ((int32_t)rd32(arg3 + ebx - arg2) >= (int32_t)rd32(loc_14 + 0x14u))
                {
                    edx = arg2;
                }
                else
                {
                    ecx = rd32(arg3 + ebx - arg2);
                    if (arg2 == 0u)
                    {
                        eax = ebp;
                    }
                    else
                    {
                        eax = rd32(ebx);
                    }
                    if (loc_8 != 0u)
                    {
                        edx = rd32(edi);
                    }
                    else
                    {
                        edx = 0u;
                    }
                    if ((int32_t)esi <= 0)
                    {
                        edx = rd32(edi + loc_4);
                    }
                    else
                    {
                        eax = edx + eax * esi * 4u;
                        edx = rd32(edi + loc_4);
                        edx = edx + ecx * esi * 4u - eax;
                        ecx = esi;
L_102a9b5d: ;
                        wr32(eax + edx, rd32(eax));
                        if (ecx != 1u)
                        {
                            eax = eax + 4u;
                            ecx = ecx - 1u;
                            goto L_102a9b5d;
                        }
                        ebp = rd32(sp0 + 0x14u);
                    }
                }
                wr32(sp0 + 0x14u, ebp + 1u);
                if ((int32_t)(ebp + 1u) < (int32_t)arg4)
                {
                    ebx = ebx + 4u;
                    ebp = ebp + 1u;
                    goto L_102a9b14;
                }
                eax = arg4;
                ebx = loc_14;
            }
        }
        if ((int32_t)(loc_10 + 1u) < 12)
        {
            ecx = loc_10 + 1u;
            edi = edi + 4u;
            loc_10 = loc_10 + 1u;
            goto L_102a9ade;
        }
        ecx = loc_10 + 1u;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102a95c0u), 5, arg1, in_edi, in_esi, in_ebp, in_ebx);
        wr32(arg1, ebx);
    }
    return;
L_102a9b14: ;
    goto L_102a9b1c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a9aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
