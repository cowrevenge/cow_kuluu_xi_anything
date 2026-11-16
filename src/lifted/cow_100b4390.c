/* f_0x100b4390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100b4390(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr32(sp0 - 0x2cu, 3u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 3u);
    t2 = g->edx;
    wr32(sp0 - 0x2cu, t1);
    g->esp = sp0 - 0x20u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 8u, sp0 - 0x14u);
    if ((uint8_t)t3 != 1u)
    {
        ebp = in_ebp;
    }
    else
    {
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x2cu, 7u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x28u;
        t4 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 7u);
        t5 = g->edx;
        wr32(sp0 - 0x2cu, t4);
        g->esp = sp0 - 0x20u;
        t6 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t5, 3, t4, sp0 - 4u, sp0 - 0x10u);
        if ((uint8_t)t6 != 1u)
        {
            ebp = in_ebp;
        }
        else
        {
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) == 0u)
            {
                ebp = in_ebp;
            }
            else
            {
                ebx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
                if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u) == 0u)
                {
                    ebp = in_ebp;
                }
                else
                {
                    edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x10u) * 4u);
                    t7 = rd32(ebx + 0x74u);
                    wr32(sp0 - 0x10u, t7);
                    t8 = rd32(edi + 0x74u);
                    wr32(sp0 - 0x10u, t8);
                    if (rd32(ebx + 0x78u) != rd32(sp0 - 8u))
                    {
                        ebp = in_ebp;
                    }
                    else
                    {
                        ecx = rd32(edi + 0x78u);
                        if (ecx != rd32(sp0 - 4u))
                        {
                            ebp = in_ebp;
                        }
                        else
                        {
                            if (!(rd32(ebx + 0x120u) >> 9u & 1u))
                            {
                                ebp = in_ebp;
                            }
                            else
                            {
                                edx = rd32(ebx + 0x120u) >> 9u;
                                if (!(rd32(edi + 0x120u) >> 9u & 1u))
                                {
                                    ebp = in_ebp;
                                }
                                else
                                {
                                    wr32(sp0 - 0x24u, in_ebp);
                                    wr32(sp0 - 0x28u, 0xbu);
                                    g->edx = edx;
                                    g->esp = sp0 - 0x24u;
                                    t9 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 0xbu);
                                    t10 = g->edx;
                                    t11 = rd32(edi + 0xa0u);
                                    wr32(sp0 - 4u, t11);
                                    wr32(sp0 - 0x28u, 1u);
                                    g->edx = t10;
                                    t12 = rd32(ebx + 0xa0u);
                                    t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
                                    t14 = g->edx;
                                    if (arg1 != 0x77f0u)
                                    {
                                        eax = arg1;
                                        edx = t14;
                                        ebx = t12;
                                        ebp = t9;
                                        edi = t13;
                                    }
                                    else
                                    {
                                        edx = t14;
                                        ebx = t12;
                                        ebp = t9;
                                        edi = t13;
                                        wr32(sp0 - 0x28u, edi);
                                        g->edx = edx;
                                        g->esp = sp0 - 0x24u;
                                        t15 = cow_stdcall(g, COW_IMG(0x100b4350u), 1, edi);
                                        t16 = g->edx;
                                        eax = t15;
                                        edx = t16;
                                        edi = t15;
                                    }
                                    wr32(sp0 - 0x28u, 0xfu);
                                    g->eax = eax;
                                    g->esp = sp0 - 0x24u;
                                    t17 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 0xfu);
                                    t18 = g->ecx;
                                    wr32(sp0 - 0x28u, t17);
                                    t19 = rd32(sp0 - 4u);
                                    wr32(sp0 - 0x2cu, t19);
                                    wr32(sp0 - 0x30u, ebx);
                                    wr32(sp0 - 0x34u, ebp);
                                    wr32(sp0 - 0x38u, arg1 + edi);
                                    cow_cdecl(g, COW_IMG(0x10062e20u), 5, arg1 + edi, ebp, ebx, t19, t17);
                                    ebp = rd32(sp0 - 0x24u);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0x11u));
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b4390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b4390(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
