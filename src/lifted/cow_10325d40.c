/* f_0x10325d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10325d40(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        ecx = arg3;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x109b27b8u)) != 0u)
        {
            wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) + 1u);
            if ((int32_t)rd32(COW_IMG(0x109f840cu)) > 0)
            {
                wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) - 1u);
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, arg3, in_edx, 1, 3, 0x13u, in_ebx, in_esi);
                t1 = g->edx;
                edx = t1;
                loc_14 = 1u;
            }
            else
            {
                edx = in_edx;
                loc_14 = 0u;
            }
            eax = 0u;
            ecx = arg3;
            ebx = 0u;
            esi = arg1;
            edi = arg2;
L_10325de4: ;
            if (((eax & 0xffffff00u) | rd8(esi)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(esi);
                ebx = (ebx & 0xffffff00u) | rd8(edi);
                goto L_10325e0f;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
            ebx = (ebx & 0xffffff00u) | rd8(edi);
            if (ebx == 0u) goto L_10325e0f;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t2 = cow_thiscall_cdecl(g, COW_IMG(0x10314653u), ecx, 1, ebx);
            t3 = g->ecx;
            t4 = g->edx;
            g->edx = t4;
            g->esp = sp0 - 0x18u;
            t5 = cow_thiscall_cdecl(g, COW_IMG(0x10314653u), t3, 1, eax);
            t6 = g->edx;
            if (t5 != t2)
            {
                edx = t6;
                cf = t5 < t2;
                goto L_10325e15;
            }
            eax = t5;
            edx = t6;
            ebx = t2;
            esi = esi + 1u;
            edi = edi + 1u;
            if (ecx != 1u)
            {
                ecx = ecx - 1u;
                goto L_10325de4;
            }
L_10325e0f: ;
            if (eax == ebx)
            {
                ecx = 0u;
                goto L_10325e1e;
            }
            cf = eax < ebx;
L_10325e15: ;
            if (cf)
            {
                ecx = 0xffffffffu;
            }
            else
            {
                ecx = 1u;
            }
L_10325e1e: ;
            if (loc_14 != 0u)
            {
                eax = loc_14;
                g->esp = sp0 - 8u;
                cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_ebx, in_esi);
                t7 = g->edx;
                edx = t7;
            }
            else
            {
                wr32(COW_IMG(0x109f8410u), rd32(COW_IMG(0x109f8410u)) - 1u);
            }
        }
        else
        {
            eax = COW_IMG(0x109b27b0u);
            ecx = arg3;
            esi = arg1;
            edi = arg2;
L_10325d6c: ;
            if (rd8(esi) << 8u >> 8u == 0u)
            {
                eax = (((eax & 0xffff00ffu) | rd8(esi) << 8u >> 8u << 8u) & 0xffffff00u) | rd8(edi);
                goto L_10325d95;
            }
            eax = (((eax & 0xffff00ffu) | rd8(esi) << 8u >> 8u << 8u) & 0xffffff00u) | rd8(edi);
            if ((uint8_t)eax == 0u)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)eax;
                goto L_10325d95;
            }
            eax = (eax & 0xffffff00u) | (uint8_t)eax;
            if ((uint8_t)(eax >> 8u) < 0x41u)
            {
                esi = esi + 1u;
                edi = edi + 1u;
            }
            else
            {
                esi = esi + 1u;
                edi = edi + 1u;
                if ((uint8_t)(eax >> 8u) <= 0x5au)
                {
                    eax = (eax & 0xffff00ffu) | (uint8_t)((uint8_t)(eax >> 8u) + 0x20u) << 8u;
                }
            }
            if ((uint8_t)eax >= 0x41u)
            {
                if ((uint8_t)eax <= 0x5au)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x20u);
                }
            }
            if ((uint8_t)(eax >> 8u) != (uint8_t)eax)
            {
                cf = (uint8_t)(eax >> 8u) < (uint8_t)eax;
                goto L_10325d9f;
            }
            if (ecx != 1u)
            {
                ecx = ecx - 1u;
                goto L_10325d6c;
            }
L_10325d95: ;
            if ((uint8_t)(eax >> 8u) == (uint8_t)eax)
            {
                ecx = 0u;
                edx = (in_edx & 0xffff00ffu) | 0x2000u;
                goto L_10325e3a;
            }
            cf = (uint8_t)(eax >> 8u) < (uint8_t)eax;
L_10325d9f: ;
            if (cf)
            {
                ecx = 0xffffffffu;
                edx = (in_edx & 0xffff00ffu) | 0x2000u;
            }
            else
            {
                ecx = 1u;
                edx = (in_edx & 0xffff00ffu) | 0x2000u;
            }
        }
    }
L_10325e3a: ;
    g->edx = edx;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10325d40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
