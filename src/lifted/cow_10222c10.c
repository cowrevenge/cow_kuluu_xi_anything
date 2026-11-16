/* f_0x10222c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10222c10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = arg1;
        loc_4 = self;
    }
    else
    {
        if (rd32(COW_IMG(0x1066714cu)) == 0u)
        {
            eax = arg1;
            loc_4 = self;
        }
        else
        {
            ebp = rd32(COW_IMG(0x1066714cu));
            t1 = rd8(arg1 * 0x30u + ebp + 0xeu);
            if (t1 == 0x12u)
            {
                loc_4 = t1;
                goto L_10222c4d;
            }
            ecx = t1;
            loc_4 = t1;
            if (ecx == 9u) goto L_10222c4d;
            if (ecx != 0xfu)
            {
                eax = arg1;
                goto L_10222c8a;
            }
L_10222c4d: ;
            if ((int32_t)rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u) <= 0)
            {
                eax = arg1;
            }
            else
            {
                ecx = rd32(COW_IMG(0x10667150u));
                edi = rd32(rd32(COW_IMG(0x10667150u)) + 0x1760u);
                ecx = ecx + 0x160u;
                esi = 0u;
L_10222c65: ;
                if (loc_4 == rd8(ebp + rd16(ecx) * 0x30u + 2u))
                {
                    eax = rd16(ecx);
                    goto L_10222c8a;
                }
                if ((int32_t)(esi + 1u) < (int32_t)edi)
                {
                    ecx = ecx + 2u;
                    esi = esi + 1u;
                    goto L_10222c65;
                }
                eax = arg1;
            }
        }
    }
L_10222c8a: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10222c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
