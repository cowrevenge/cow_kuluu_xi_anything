/* f_0x10308374 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10308374(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(arg1 + 0x1a4u) + 0x10u);
    t2 = rd32(arg1 + 0x1a4u);
    wr32(arg1 + 0x74u, t1);
    t3 = rd32(t2 + 0x14u);
    wr32(arg1 + 0x70u, t3);
    if (rd32(arg1 + 0x4cu) == 0u)
    {
        eax = rd32(arg1 + 0x4cu);
        edi = t2;
        if (rd32(arg1 + 0x64u) != 3u)
        {
            wr32(edi + 4u, COW_IMG(0x10307ebbu));
            edx = in_edx;
        }
        else
        {
            wr32(edi + 4u, COW_IMG(0x10307f43u));
            edx = in_edx;
        }
    }
    else
    {
        eax = rd32(arg1 + 0x4cu);
        edi = t2;
        if (eax == 1u)
        {
            eax = eax - 1u;
            if (rd32(arg1 + 0x64u) != 3u)
            {
                wr32(edi + 4u, COW_IMG(0x10307fd0u));
            }
            else
            {
                wr32(edi + 4u, COW_IMG(0x103080bbu));
            }
            t14 = rd8(edi + 0x1cu);
            wr32(edi + 0x30u, 0u);
            if ((uint8_t)t14 != 0u)
            {
                ecx = self;
                edx = in_edx;
            }
            else
            {
                g->eax = eax;
                g->esp = sp0 - 8u;
                t15 = cow_call_regs(g, COW_IMG(0x10307c69u), g->eax, g->ecx, in_edx, 1, 3, arg1, in_edi, in_esi);
                t16 = g->edx;
                eax = t15;
                ecx = arg1;
                edx = t16;
            }
            if (rd32(edi + 0x34u) == 0u)
            {
                g->edi = arg1;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t17 = cow_stdcall(g, COW_IMG(0x10307df6u), 0);
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
        }
        else
        {
            eax = eax - 1u;
            if (eax == 1u)
            {
                eax = eax - 1u;
                wr8(edi + 0x54u, 0u);
                t7 = rd32(edi + 0x44u);
                wr32(edi + 4u, COW_IMG(0x103081bau));
                if (t7 != 0u)
                {
                    ecx = self;
                    edx = in_edx;
                    ebx = edi + 0x44u;
                }
                else
                {
                    ebx = edi + 0x44u;
                    g->esi = arg1;
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t8 = cow_fastcall(g, COW_IMG(0x1030833eu), self, in_edx, 0);
                    t9 = g->ecx;
                    t10 = g->edx;
                    eax = t8;
                    ecx = t9;
                    edx = t10;
                }
                if ((int32_t)rd32(arg1 + 0x64u) <= 0) goto L_10308439;
                ebp = rd32(arg1 + 0x5cu) * 2u + 4u;
                edi = 0u;
L_103083da: ;
                g->eax = eax;
                g->edx = edx;
                t11 = rd32(ebx);
                g->esp = sp0 - 0xcu;
                t12 = cow_cdecl(g, COW_IMG(0x102f595eu), 3, t11, ebp, in_edi);
                t13 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x64u))
                {
                    eax = t12;
                    ecx = ebp;
                    edx = t13;
                    ebx = ebx + 4u;
                    edi = edi + 1u;
                    goto L_103083da;
                }
                eax = t12;
                edx = t13;
            }
            else
            {
                wr32(rd32(arg1) + 0x14u, 0x2fu);
                g->eax = rd32(arg1);
                g->edx = in_edx;
                t4 = rd32(arg1);
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall_cdecl(g, rd32(t4), self, 1, arg1);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
        }
    }
L_10308439: ;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308374(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10308374(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
