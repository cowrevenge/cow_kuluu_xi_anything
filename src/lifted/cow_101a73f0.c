/* f_0x101a73f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101a73f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        edx = arg1;
    }
    else
    {
        if (arg2 == 0u)
        {
            edx = arg1;
        }
        else
        {
            edi = arg2;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx - 1u > 0xfu)
            {
                edx = arg1;
            }
            else
            {
                wr32(arg1, eax);
                wr32(arg1 + 4u, eax);
                wr32(arg1 + 8u, eax);
                wr32(arg1 + 0xcu, eax);
                eax = arg2;
                ecx = arg1;
L_101a7425: ;
                t1 = rd8(eax);
                wr8(arg1 + eax - arg2, (uint8_t)t1);
                if ((uint8_t)t1 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t1;
                    goto L_101a7425;
                }
                edx = arg1 - arg2;
            }
        }
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a73f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a73f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
