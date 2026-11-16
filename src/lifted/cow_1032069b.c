/* f_0x1032069b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1032069b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x1031a04du), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(t1 + 0x50u);
    t5 = rd32(sp0 + 4u);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x103207d9u), 3, t5, t4, in_esi);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t4;
        edx = t7;
        goto L_103207cc;
    }
    eax = t6;
    ecx = t4;
    edx = t7;
    esi = t1;
    t8 = rd32(eax + 8u);
    t9 = rd32(eax + 8u);
    wr32(sp0 + 4u, t8);
    if (t9 == 0u) goto L_103207cc;
    ebx = t8;
    if (ebx != 5u)
    {
        if (ebx != 1u)
        {
            t10 = rd32(esi + 0x54u);
            wr32(esi + 0x54u, arg2);
            if (rd32(eax + 4u) != 8u)
            {
                ecx = rd32(eax + 4u);
                loc_8 = t10;
                wr32(eax + 8u, 0u);
                g->esp = sp0 - 0x10u;
                cow_thiscall_cdecl(g, ebx, ecx, 1, ecx);
            }
            else
            {
                loc_8 = t10;
                if ((int32_t)rd32(COW_IMG(0x103d2e80u)) >= (int32_t)(rd32(COW_IMG(0x103d2e80u)) + rd32(COW_IMG(0x103d2e84u))))
                {
                    ecx = rd32(COW_IMG(0x103d2e80u)) + rd32(COW_IMG(0x103d2e84u));
                    edx = rd32(COW_IMG(0x103d2e80u));
                }
                else
                {
                    edx = rd32(COW_IMG(0x103d2e80u));
                    ecx = edx * 0xcu;
L_10320716: ;
                    wr32(ecx + rd32(esi + 0x50u) + 8u, 0u);
                    if ((int32_t)(edx + 1u) < (int32_t)(rd32(COW_IMG(0x103d2e80u)) + rd32(COW_IMG(0x103d2e84u))))
                    {
                        ecx = ecx + 0xcu;
                        edx = edx + 1u;
                        goto L_10320716;
                    }
                    ecx = ecx + 0xcu;
                    edx = edx + 1u;
                    ebx = rd32(sp0 + 4u);
                }
                if (rd32(eax) != 0xc000008eu)
                {
                    eax = rd32(eax);
                    edi = rd32(esi + 0x58u);
                    if (eax != 0xc0000090u)
                    {
                        if (eax != 0xc0000091u)
                        {
                            if (eax != 0xc0000093u)
                            {
                                if (eax != 0xc000008du)
                                {
                                    if (eax != 0xc000008fu)
                                    {
                                        if (eax == 0xc0000092u)
                                        {
                                            wr32(esi + 0x58u, 0x8au);
                                        }
                                    }
                                    else
                                    {
                                        wr32(esi + 0x58u, 0x86u);
                                    }
                                }
                                else
                                {
                                    wr32(esi + 0x58u, 0x82u);
                                }
                            }
                            else
                            {
                                wr32(esi + 0x58u, 0x85u);
                            }
                        }
                        else
                        {
                            wr32(esi + 0x58u, 0x84u);
                        }
                    }
                    else
                    {
                        wr32(esi + 0x58u, 0x81u);
                    }
                }
                else
                {
                    eax = rd32(eax);
                    edi = rd32(esi + 0x58u);
                    wr32(esi + 0x58u, 0x83u);
                }
                t11 = rd32(esi + 0x58u);
                g->esp = sp0 - 0x14u;
                cow_thiscall_cdecl(g, ebx, ecx, 2, 8u, t11);
                wr32(esi + 0x58u, edi);
            }
            wr32(esi + 0x54u, loc_8);
            eax = loc_8;
        }
        eax = 0xffffffffu;
    }
    else
    {
        wr32(eax + 8u, 0u);
        eax = 1u;
    }
L_103207d5: ;
    return eax;
L_103207cc: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, rd32(COW_IMG(0x103292c0u)), ecx, 1, arg2);
    eax = t12;
    goto L_103207d5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032069b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1032069b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
