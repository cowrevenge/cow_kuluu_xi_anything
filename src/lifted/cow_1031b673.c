/* f_0x1031b673 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031b673(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    if (rd32(COW_IMG(0x109f8408u)) != 3u)
    {
        eax = rd32(COW_IMG(0x109f8408u));
        if (eax != 2u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            ecx = self;
            edx = in_edx;
            esi = COW_IMG(0x103d09b8u);
L_1031b6f1: ;
            if (rd32(esi + 0x10u) == 0u)
            {
                eax = rd32(esi + 0x10u);
            }
            else
            {
                eax = rd32(esi + 0x10u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t14 = cow_thiscall(g, rd32(COW_IMG(0x1032922cu)), ecx, 3, eax, 0u, 0x8000u);
                t15 = g->ecx;
                t16 = g->edx;
                eax = t14;
                ecx = t15;
                edx = t16;
            }
            if (rd32(esi) != COW_IMG(0x103d09b8u))
            {
                esi = rd32(esi);
                goto L_1031b6f1;
            }
        }
    }
    else
    {
        eax = rd32(COW_IMG(0x109f8408u));
        if ((int32_t)rd32(COW_IMG(0x109f83f8u)) <= 0)
        {
            ecx = self;
            edx = in_edx;
            ebp = rd32(COW_IMG(0x10329260u));
        }
        else
        {
            ebp = rd32(COW_IMG(0x10329260u));
            eax = rd32(COW_IMG(0x109f83fcu));
            ecx = self;
            edx = in_edx;
            ebx = 0u;
            esi = rd32(COW_IMG(0x109f83fcu)) + 0xcu;
            edi = rd32(COW_IMG(0x1032922cu));
L_1031b69f: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t1 = cow_thiscall(g, edi, ecx, 3, rd32(esi), 0x100000u, 0x4000u);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            t4 = cow_thiscall(g, edi, t2, 3, rd32(esi), 0u, 0x8000u);
            t5 = g->ecx;
            t6 = g->edx;
            t7 = rd32(esi + 4u);
            g->edx = t6;
            t8 = cow_thiscall(g, ebp, t5, 3, rd32(COW_IMG(0x109f8404u)), 0u, t7);
            t9 = g->ecx;
            t10 = g->edx;
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(COW_IMG(0x109f83f8u)))
            {
                eax = t8;
                ecx = t9;
                edx = t10;
                ebx = ebx + 1u;
                esi = esi + 0x14u;
                goto L_1031b69f;
            }
            eax = t8;
            ecx = t9;
            edx = t10;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, ebp, ecx, 3, rd32(COW_IMG(0x109f8404u)), 0u, rd32(COW_IMG(0x109f83fcu)));
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x10329178u)), ecx, 1, rd32(COW_IMG(0x109f8404u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b673(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031b673(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
