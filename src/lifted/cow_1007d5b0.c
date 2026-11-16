/* f_0x1007d5b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007d5b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        if (rd32(arg2) != 3u)
        {
            eax = arg2;
            edx = in_edx;
        }
        else
        {
            eax = arg1;
            ecx = self;
            edx = in_edx;
            ebx = in_ebx;
            esi = rd32(arg2 + 8u) + 4u;
            edi = rd32(arg2 + 8u);
L_1007d5ca: ;
            if (rd8(eax) != rd8(esi))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                edx = (edx & 0xffffff00u) | rd8(eax);
                cf = rd8(eax) < rd8(esi);
                goto L_1007d5f2;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            ebx = (ebx & 0xffffff00u) | rd8(esi);
            if ((uint8_t)ecx == 0u) goto L_1007d5ee;
            if (rd8(eax + 1u) != rd8(esi + 1u))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                cf = rd8(eax + 1u) < rd8(esi + 1u);
                goto L_1007d5f2;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
            if ((uint8_t)ecx != 0u)
            {
                eax = eax + 2u;
                esi = esi + 2u;
                goto L_1007d5ca;
            }
L_1007d5ee: ;
            eax = 0u;
L_1007d5f7: ;
            if (eax == 0u)
            {
                if ((rd8(edi + 0x30u) & 8u) == 0u)
                {
                    t2 = rd32(edi + 0x18u);
                    ecx = t2;
                    loc_8 = 0u;
                    loc_10 = t2;
                }
                else
                {
                    t1 = rd32(edi + 0x18u);
                    loc_8 = 5u;
                    loc_10 = t1;
                }
                g->edi = edi;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t3 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, loc_10, 0u, loc_8);
                t4 = g->ecx;
                t5 = g->edx;
                if ((uint8_t)t3 != 0u)
                {
                    eax = t3;
                    edx = t5;
                }
                else
                {
                    eax = t3;
                    ecx = t4;
                    edx = t5;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
                    t7 = g->ecx;
                    t8 = g->edx;
                    g->edx = t8;
                    g->esp = sp0 - 8u;
                    t9 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, t6, 9u);
                    t10 = g->edx;
                    eax = t9;
                    edx = t10;
                }
            }
        }
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1007d5f2: ;
    eax = -cf + 1u - cf;
    goto L_1007d5f7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d5b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d5b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
