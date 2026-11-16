/* f_0x100d8fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100d8fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
        g->esp = sp0 - 0xcu;
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
                esi = 1u;
            }
            else
            {
                wr16(arg1 + 0x488u, 0u);
                wr16(arg1 + 0x48au, 0u);
                wr16(arg1 + 0x484u, 0x10u);
                wr8(arg1 + 0x486u, 0x80u);
                wr8(arg1 + 0x487u, 2u);
                esi = arg2;
                edi = arg1 + 0x48cu;
                ecx = 5u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr16(arg1 + 0x484u, 0x24u);
                wr32(arg1 + 0x47cu, 0x24u);
                wr32(arg1 + 0x480u, 0x46465849u);
                if (rd32(arg1 + 0x18u) == 0u)
                {
                    eax = rd32(arg1 + 0x18u);
                }
                else
                {
                    eax = rd32(arg1 + 0x18u);
                    t5 = rd32(arg1 + 0x1cu);
                    g->eax = eax;
                    g->esp = sp0 - 0x10u;
                    t6 = cow_thiscall_cdecl(g, eax, t5, 3, t5, arg1 + 0x47cu, 0x24u);
                    t7 = g->ecx;
                    wr32(arg1 + 0x47cu, t6);
                    eax = t6;
                    ecx = t7;
                }
                t8 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 5u);
                g->edx = t8;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(COW_IMG(0x103291d8u)), ecx, 3, t8, 1u, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
                esi = 0u;
            }
            t11 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), ecx, 1, t11);
        }
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
