/* f_0x102ef9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102ef9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 == 0u)
    {
        if (arg3 == 0u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            if (arg4 == 0u)
            {
                eax = in_eax;
                edx = in_edx;
                goto L_102efa35;
            }
            eax = in_eax;
            ecx = self;
            edx = in_edx;
            esi = arg4;
            edi = arg3;
L_102efa20: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t7 = cow_cdecl(g, COW_IMG(0x102ef619u), 3, arg1, 0u, rd32(edi));
            t8 = g->ecx;
            t9 = g->edx;
            if (esi != 1u)
            {
                eax = t7;
                ecx = t8;
                edx = t9;
                esi = esi - 1u;
                edi = edi + 4u;
                goto L_102efa20;
            }
            eax = t7;
            edx = t9;
        }
    }
    else
    {
        if (arg3 == 0u)
        {
            if (arg4 == 0u)
            {
                eax = in_eax;
                edx = in_edx;
                goto L_102efa35;
            }
            eax = in_eax;
            ecx = self;
            edx = in_edx;
            esi = arg2;
            edi = arg4;
L_102ef9fe: ;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t4 = cow_cdecl(g, COW_IMG(0x102ef619u), 3, arg1, rd32(esi), 0u);
            t5 = g->ecx;
            t6 = g->edx;
            if (edi != 1u)
            {
                eax = t4;
                ecx = t5;
                edx = t6;
                esi = esi + 4u;
                edi = edi - 1u;
                goto L_102ef9fe;
            }
            eax = t4;
            edx = t6;
        }
        else
        {
            if (arg4 == 0u)
            {
                eax = in_eax;
                edx = in_edx;
                goto L_102efa35;
            }
            edx = in_edx;
            ebx = arg4;
            esi = arg2;
            edi = arg3;
L_102ef9db: ;
            g->eax = rd32(esi);
            g->edx = edx;
            t1 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t2 = cow_cdecl(g, COW_IMG(0x102ef619u), 3, arg1, t1, rd32(edi));
            t3 = g->edx;
            if (ebx != 1u)
            {
                edx = t3;
                ebx = ebx - 1u;
                esi = esi + 4u;
                edi = edi + 4u;
                goto L_102ef9db;
            }
            eax = t2;
            edx = t3;
        }
    }
L_102efa35: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ef9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
