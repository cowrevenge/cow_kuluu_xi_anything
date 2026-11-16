/* f_0x1031cd7a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1031cd7a(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_8;
    uint32_t zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3) <= arg4)
    {
        ecx = rd8(arg3);
        edi = arg1 + (uint32_t)((int32_t)(arg2 - rd32(arg1 + 0x10u)) >> 0xcu) * 8u + 0x18u;
        cf = rd8(arg3) < arg4;
        goto L_1031cdb4;
    }
    ecx = rd8(arg3);
    edi = arg1 + (uint32_t)((int32_t)(arg2 - rd32(arg1 + 0x10u)) >> 0xcu) * 8u + 0x18u;
    wr8(arg3, (uint8_t)arg4);
    wr32(edi, ecx + rd32(edi) - arg4);
    wr32(edi + 4u, 0xf1u);
L_1031ce14: ;
    loc_8 = 1u;
L_1031ce1b: ;
    g->edx = arg3;
    return loc_8;
L_1031cdb4: ;
    if (!cf)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    if (arg4 + arg3 > arg2 + 0xf8u)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    eax = arg3 + ecx;
L_1031cdc9: ;
    if (eax >= arg4 + arg3)
    {
        zf = eax == arg4 + arg3;
        goto L_1031cdd7;
    }
    if (rd8(eax) != 0u) goto L_1031cdd5;
    eax = eax + 1u;
    goto L_1031cdc9;
L_1031cdd5: ;
    zf = eax == arg4 + arg3;
L_1031cdd7: ;
    if (!zf)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    wr8(arg3, (uint8_t)arg4);
    if (arg3 <= rd32(arg2))
    {
        eax = rd32(arg2);
        if (arg4 + arg3 > eax)
        {
            if (arg4 + arg3 >= arg2 + 0xf8u)
            {
                wr32(arg2 + 4u, 0u);
                wr32(arg2, arg2 + 8u);
            }
            else
            {
                wr32(arg2, arg4 + arg3);
                if (rd8(arg4 + arg3) != 0u)
                {
                    eax = 0u;
                    goto L_1031ce01;
                }
                eax = 0u;
L_1031cdfa: ;
                if (rd8(arg4 + arg3 + eax + 1u) == 0u)
                {
                    eax = eax + 1u;
                    goto L_1031cdfa;
                }
                eax = eax + 1u;
L_1031ce01: ;
                wr32(arg2 + 4u, eax);
            }
        }
    }
    wr32(edi, ecx + rd32(edi) - arg4);
    goto L_1031ce14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cd7a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031cd7a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
