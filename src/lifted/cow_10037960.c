/* f_0x10037960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10037960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x10463944u)) != arg1)
    {
        eax = rd32(COW_IMG(0x10463944u));
        wr32(COW_IMG(0x10463944u), arg1);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x5cu, 4u);
        t2 = g->edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
        t4 = g->edx;
        wr8(COW_IMG(0x1047d13cu), 1u);
        if (t1 != 0u)
        {
            eax = t3;
            edx = t4;
            esi = t1;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
            t5 = g->edx;
            wr32(esi, COW_IMG(0x1032a990u));
            if (rd32(COW_IMG(0x10463948u)) == 0u)
            {
                edx = t5;
            }
            else
            {
                ecx = rd32(COW_IMG(0x10463948u));
                edx = t5;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
                t6 = g->edx;
                edx = t6;
            }
            wr8(esi + 0x35u, 1u);
            wr8(esi + 0x34u, 0u);
            wr32(COW_IMG(0x10463948u), esi);
            wr32(esi + 0x3cu, arg1);
            wr32(esi + 0x40u, 0x7fu);
            wr32(esi + 0x44u, 0x7fu);
            wr32(esi + 0x48u, 0u);
            wr32(esi + 0x50u, 0u);
            wr8(esi + 0x54u, 0u);
            wr32(esi + 0x4cu, 0x1eu);
            wr32(esi + 0x38u, 0u);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x100749b0u), esi, 1, 5u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10037960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10037960(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
