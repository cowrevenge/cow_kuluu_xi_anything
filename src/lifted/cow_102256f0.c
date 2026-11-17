/* f_0x102256f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102256f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        if (rd32(self + 0x68u) != 0u)
        {
            if (rd32(COW_IMG(0x1066715cu)) != 0u)
            {
                g->eax = eax + 4u;
                t1 = rd32(eax);
                g->esp = sp0 - 0x18u;
                t2 = cow_fastcall(g, COW_IMG(0x10221a30u), self, in_edx, 0);
                t3 = g->edx;
                cow_thiscall(g, COW_IMG(0x10221900u), self, 4, COW_IMG(0x102257d0u), t1, 0u, 0xcu);
                ebx = 0u;
                ebp = t1;
                edi = 0u;
                loc_8 = t1;
                loc_4 = eax + 4u;
L_1022574b: ;
                t4 = rd16(ebx + rd32(COW_IMG(0x1066715cu)));
                g->eax = loc_4;
                g->ecx = t4;
                g->esp = sp0;
                t5 = cow_cdecl(g, COW_IMG(0x10225600u), 9, t4, ebp, loc_4, in_edi, in_ebp, in_ebx, in_esi, loc_8, loc_4);
                t6 = g->ecx;
                g->eax = arg1;
                g->edx = t5;
                g->esp = sp0 - 0x24u;
                t7 = cow_cdecl(g, COW_IMG(0x102256c0u), 2, t5, arg1);
                t8 = g->edx;
                if ((uint8_t)t7 == 0u)
                {
                    eax = t7;
                    edx = t8;
                }
                else
                {
                    eax = t7;
                    edx = t8;
                    if ((int32_t)edi >= 0)
                    {
                        if ((int32_t)edi < (int32_t)rd32(self + 0x44u))
                        {
                            if (edi * 8u + rd32(self + 0x20u) == 0u)
                            {
                                eax = edi * 8u + rd32(self + 0x20u);
                            }
                            else
                            {
                                eax = edi * 8u + rd32(self + 0x20u);
                                wr32(eax, rd16(edx));
                                edi = edi + 1u;
                            }
                        }
                    }
                }
                if ((int32_t)(ebx + 2u) < 256)
                {
                    ebx = ebx + 2u;
                    goto L_10225747;
                }
                g->eax = eax;
                g->esp = sp0 - 0x18u;
                t9 = cow_fastcall(g, COW_IMG(0x10221a80u), self, edx, 2, edi, 0u);
                wr32(self + 0x58u, 1u);
                cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, arg2);
            }
        }
    }
    return;
L_10225747: ;
    ebp = loc_8;
    goto L_1022574b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102256f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102256f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
