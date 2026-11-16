/* f_0x100d8ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        esi = 1u;
    }
    else
    {
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, t1, 0x32u);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            esi = 1u;
        }
        else
        {
            ecx = t3;
            edx = t4;
            if (rd32(arg1 + 0x460u) != 0u)
            {
                eax = rd32(arg1 + 0x460u);
                esi = 1u;
            }
            else
            {
                wr16(arg1 + 0x484u, 0x10u);
                wr8(arg1 + 0x486u, 0x80u);
                wr8(arg1 + 0x487u, 8u);
                wr16(arg1 + 0x488u, 0u);
                wr16(arg1 + 0x48au, 0u);
                if (rd16(arg2) == 0u)
                {
                    wr32(arg1 + 0x48cu, 0u);
                }
                else
                {
                    t5 = rd32(arg2 + 4u);
                    wr32(arg1 + 0x48cu, t5);
                    ecx = t5;
                }
                wr16(arg1 + 0x484u, 0x14u);
                wr32(arg1 + 0x47cu, 0x14u);
                wr32(arg1 + 0x480u, 0x46465849u);
                if (rd32(arg1 + 0x18u) != 0u)
                {
                    eax = rd32(arg1 + 0x18u);
                    t6 = rd32(arg1 + 0x1cu);
                    g->eax = eax;
                    g->edx = t6;
                    g->esp = sp0 - 8u;
                    t7 = cow_thiscall_cdecl(g, eax, ecx, 3, t6, arg1 + 0x47cu, 0x14u);
                    t8 = g->ecx;
                    t9 = g->edx;
                    wr32(arg1 + 0x47cu, t7);
                    ecx = t8;
                    edx = t9;
                }
                t10 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 5u);
                g->eax = t10;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t11 = cow_thiscall(g, rd32(COW_IMG(0x103291d8u)), ecx, 3, t10, 1u, 0u);
                t12 = g->edx;
                eax = t11;
                edx = t12;
                esi = 0u;
            }
            t13 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), t13, 1, t13);
        }
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
