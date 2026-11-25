/* f_0x1020f290 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Initializes a structure of 12 elements, allocating memory for them if needed, and calling helper functions to set up each element.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1020f290(Guest* g, uint32_t self)
{
    /* Initial calls */
    /* 1020f29c: call 0x101f7020 (thiscall, ret 12) */
    /* Args pushed: 1, 0, 0. Source order: 0, 0, 1 */
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);

    /* 1020f2a3: call 0x1020e530 (fastcall/cdecl, bare ret) */
    /* Decompiler says __fastcall with 1 param. Instructions show no pushes before call. 
       Fastcall passes first arg in ECX. So ecx=self. */
    cow_fastcall(g, COW_IMG(0x1020e530u), self, 0u, 0);

    /* Check/Allocate array at offset 0x60 */
    uint32_t ptr60 = rd32(self + 0x60u);
    uint32_t ebx_val = 0xC;
    wr32(self + 0x50u, ebx_val);

    if (ptr60 == 0) {
        /* 1020f2bc: call operator new(0x3f0) */
        uint32_t pNew = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x3F0u);
        
        if (pNew != 0) {
            /* Loop 12 times calling FUN_101f4af0 */
            uint32_t edi = pNew;
            for (int i = 0; i < 12; ++i) {
                /* 1020f2ce: call 0x101f4af0 (fastcall/cdecl, bare ret) */
                /* Decompiler says __fastcall with 1 param. ECX=edi. */
                cow_fastcall(g, COW_IMG(0x101f4af0u), edi, 0u, 0);
                edi += 0x54;
            }
        } else {
            pNew = 0;
        }
        wr32(self + 0x60u, pNew);
    }

    /* Check/Allocate array at offset 0x64 */
    uint32_t ptr64 = rd32(self + 0x64u);
    if (ptr64 == 0) {
        uint32_t size = rd32(self + 0x50u) << 3;
        /* 1020f2f0: call operator new(size) */
        ptr64 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, size);
        wr32(self + 0x64u, ptr64);
    }

    /* Initialize counter at 0x54 to 0 */
    uint32_t edi_counter = 0;
    wr32(self + 0x54u, 0);

    /* Main Loop: 12 iterations */
    for (int i = 0; i < 12; ++i) {
        uint32_t ecx_idx = rd32(self + 0x54u);
        
        /* Calculate ebp (pointer to element in array at 0x60) */
        /* edx = ecx * 8 - ecx = ecx * 7 */
        /* edx = edx * 2 = ecx * 14? No. 
           lea eax, [ecx*8] -> eax = ecx*8
           sub eax, ecx     -> eax = ecx*7
           lea edx, [eax+eax*2] -> edx = eax*3 = ecx*21
           Wait, instruction is:
           1020f30a: lea eax, [ecx*8]
           1020f312: sub eax, ecx
           1020f314: lea edx, [eax + eax*2]
           
           eax = ecx * 7.
           edx = eax + eax * 2 = eax * 3 = ecx * 21.
           
           Then:
           1020f317: mov eax, dword ptr [esi + 0x60]
           1020f31a: lea ebp, [eax + edx*4]
           
           ebp = ptr60 + (ecx * 21) * 4 = ptr60 + ecx * 84? 
           Wait. Size of element is likely 0x54 (84). 
           So ebp points to the i-th element. */
        
        uint32_t eax_calc = ecx_idx * 8u;
        eax_calc -= ecx_idx; /* ecx * 7 */
        uint32_t edx_calc = eax_calc + eax_calc * 2u; /* ecx * 21 */
        
        uint32_t ptr60_curr = rd32(self + 0x60u);
        uint32_t ebp_elem = ptr60_curr + (edx_calc * 4u); /* ptr60 + ecx * 84 */

        /* Write to array at 0x64 */
        uint32_t ptr64_curr = rd32(self + 0x64u);
        
        /* 1020f320: mov dword ptr [edx + ecx*8], edi */
        wr32(ptr64_curr + (ecx_idx * 8u), edi_counter);
        /* 1020f323: mov byte ptr [edx + ecx*8 + 4], 0 */
        wr8(ptr64_curr + (ecx_idx * 8u) + 4u, 0);

        /* ebx for later use */
        uint32_t ebx_elem_ptr = ptr64_curr + (ecx_idx * 8u);

        /* Call FUN_100a36c0 */
        /* Args: edi_counter, 0, 0, 0x80808080 */
        /* Convention: cdecl (caller pops) */
        uint32_t uVar4 = cow_cdecl(g, COW_IMG(0x100a36c0u), 4, edi_counter, 0u, 0u, 0x80808080u);

        /* Call FUN_101f4b20 */
        /* Thiscall, ret 16 (4 args) */
        /* Args: 0, 1, uVar4, 0x80808080 */
        cow_thiscall(g, COW_IMG(0x101f4b20u), ebp_elem, 4, 0u, 1u, uVar4, 0x80808080u);

        /* Call FUN_100a36a0 */
        /* Args: edi_counter, 0x80808080 */
        /* Convention: cdecl (caller pops) */
        uint32_t uVar4b = cow_cdecl(g, COW_IMG(0x100a36a0u), 2, edi_counter, 0x80808080u);

        /* Call FUN_101f4b20 */
        /* Thiscall, ret 16 (4 args) */
        /* Args: 1, 0x21, uVar4b, 0x80808080 */
        cow_thiscall(g, COW_IMG(0x101f4b20u), ebp_elem, 4, 1u, 0x21u, uVar4b, 0x80808080u);

        /* Store ebx in element */
        wr32(ebp_elem + 0x48u, ebx_elem_ptr);

        /* Call thunk_FUN_10152f20 */
        /* Args: 0xe, 0x37c */
        /* Convention: cdecl (caller pops) */
        uint32_t uVarRes = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xEu, 0x37Cu);

        /* Store result in element */
        wr32(ebp_elem + 0x4cu, uVarRes);

        /* Update counter at 0x54 */
        uint32_t new_count = ecx_idx + 1;
        wr32(self + 0x54u, new_count);

        /* Call FUN_101f7020 */
        /* Thiscall, ret 12 (3 args) */
        /* Args: ptr60_curr, new_count, 1 */
        cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, ptr60_curr, new_count, 1u);

        edi_counter++;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* self is in ecx */
    cow_fn_1020f290(g, g->ecx);
    g->esp = sp0;
    rt_return(g, 0u, 0u);
}
/* COW_ADAPTER END */
