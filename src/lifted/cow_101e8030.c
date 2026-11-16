/* f_0x101e8030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e8030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 - rd32(COW_IMG(0x1066358cu)) > 0x78u)
    {
        ecx = t2;
        edx = t3;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_cdecl(g, COW_IMG(0x10098010u), 3, COW_IMG(0x101e80f0u), COW_IMG(0x101e8200u), COW_IMG(0x101e8260u));
        t5 = g->edx;
        if ((uint8_t)t4 != 0u)
        {
            edx = t5;
            t6 = rd32(COW_IMG(0x105781f8u));
            wr8(COW_IMG(0x10663588u), 0u);
            wr32(COW_IMG(0x10663644u), 0u);
            if (t6 == 0u)
            {
                ecx = 0u;
            }
            else
            {
                eax = t6;
                g->edx = edx;
                g->esp = sp0;
                cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 2u);
                t7 = g->ecx;
                t8 = g->edx;
                ecx = t7;
                edx = t8;
            }
            eax = COW_IMG(0x1037fd52u);
            ecx = (ecx & 0xffffff00u) | 8u;
L_101e808b: ;
            wr8(eax, (uint8_t)ecx);
            if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x103811f2u))
            {
                eax = eax + 0x20u;
                goto L_101e808b;
            }
            eax = COW_IMG(0x10381210u);
L_101e809c: ;
            wr8(eax, rd8(eax) & 0xfbu);
            wr8(eax + 2u, (uint8_t)ecx);
            wr8(eax + 3u, (uint8_t)ecx);
            if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x103812b0u))
            {
                eax = eax + 0x20u;
                goto L_101e809c;
            }
            eax = COW_IMG(0x10381830u);
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 0xffu);
L_101e80b7: ;
            wr8(eax + 1u, rd8(eax + 1u) & 0xfdu);
            wr8(eax + 2u, (uint8_t)edx);
            wr8(eax + 3u, (uint8_t)ecx);
            if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x10381b70u))
            {
                eax = eax + 0x20u;
                goto L_101e80b7;
            }
            eax = COW_IMG(0x10381b90u);
            ecx = (ecx & 0xffffff00u) | 3u;
L_101e80d2: ;
            wr8(eax, rd8(eax) & 0xfbu);
            wr8(eax + 2u, (uint8_t)ecx);
            wr8(eax + 3u, (uint8_t)ecx);
            if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x10381c90u))
            {
                eax = eax + 0x20u;
                goto L_101e80d2;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e8030(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
